#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ToggleWorldDisplay
// Address: 0x21c848 - 0x21c938
void ToggleWorldDisplay_0x21c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c848u;

    // 0x21c848: 0x27bdfff0
    ctx->pc = 0x21c848u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c84c: 0xffbf0000
    ctx->pc = 0x21c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c850: 0x3c020032
    ctx->pc = 0x21c850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c854: 0x8c42faa4
    ctx->pc = 0x21c854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965924)));
    // 0x21c858: 0x1040000e
    ctx->pc = 0x21C858u;
    {
        const bool branch_taken_0x21c858 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C85Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21c858) {
            ctx->pc = 0x21C894u;
            goto label_21c894;
        }
    }
    ctx->pc = 0x21C860u;
    // 0x21c860: 0x8c43d594
    ctx->pc = 0x21c860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956436)));
    // 0x21c864: 0x24020002
    ctx->pc = 0x21c864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c868: 0x10620007
    ctx->pc = 0x21C868u;
    {
        const bool branch_taken_0x21c868 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x21C86Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x21c868) {
            ctx->pc = 0x21C888u;
            goto label_21c888;
        }
    }
    ctx->pc = 0x21C870u;
    // 0x21c870: 0x10400008
    ctx->pc = 0x21C870u;
    {
        const bool branch_taken_0x21c870 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21c870) {
            ctx->pc = 0x21C894u;
            goto label_21c894;
        }
    }
    ctx->pc = 0x21C878u;
    // 0x21c878: 0x14620008
    ctx->pc = 0x21C878u;
    {
        const bool branch_taken_0x21c878 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x21C87Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x21c878) {
            ctx->pc = 0x21C89Cu;
            goto label_21c89c;
        }
    }
    ctx->pc = 0x21C880u;
    // 0x21c880: 0x10000006
    ctx->pc = 0x21C880u;
    {
        const bool branch_taken_0x21c880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C884u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x21c880) {
            ctx->pc = 0x21C89Cu;
            goto label_21c89c;
        }
    }
    ctx->pc = 0x21C888u;
label_21c888:
    // 0x21c888: 0x3c03003c
    ctx->pc = 0x21c888u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21c88c: 0x10000003
    ctx->pc = 0x21C88Cu;
    {
        const bool branch_taken_0x21c88c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x21c88c) {
            ctx->pc = 0x21C89Cu;
            goto label_21c89c;
        }
    }
    ctx->pc = 0x21C894u;
label_21c894:
    // 0x21c894: 0x3c03003c
    ctx->pc = 0x21c894u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21c898: 0x24020001
    ctx->pc = 0x21c898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21c89c:
    // 0x21c89c: 0xac62d594
    ctx->pc = 0x21c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956436), GPR_U32(ctx, 2));
    // 0x21c8a0: 0x3c020032
    ctx->pc = 0x21c8a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c8a4: 0x8c44fb50
    ctx->pc = 0x21c8a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966096)));
    // 0x21c8a8: 0x1080000d
    ctx->pc = 0x21C8A8u;
    {
        const bool branch_taken_0x21c8a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C8ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21c8a8) {
            ctx->pc = 0x21C8E0u;
            goto label_21c8e0;
        }
    }
    ctx->pc = 0x21C8B0u;
    // 0x21c8b0: 0x8c42d594
    ctx->pc = 0x21c8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956436)));
    // 0x21c8b4: 0x30420001
    ctx->pc = 0x21c8b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x21c8b8: 0x10400005
    ctx->pc = 0x21C8B8u;
    {
        const bool branch_taken_0x21c8b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C8BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x21c8b8) {
            ctx->pc = 0x21C8D0u;
            goto label_21c8d0;
        }
    }
    ctx->pc = 0x21C8C0u;
    // 0x21c8c0: 0xc0b41e4
    ctx->pc = 0x21C8C0u;
    SET_GPR_U32(ctx, 31, 0x21C8C8u);
    ctx->pc = 0x21C8C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8C8u; }
    }
    if (ctx->pc != 0x21C8C8u) { return; }
    ctx->pc = 0x21C8C8u;
    // 0x21c8c8: 0x10000006
    ctx->pc = 0x21C8C8u;
    {
        const bool branch_taken_0x21c8c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C8CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21c8c8) {
            ctx->pc = 0x21C8E4u;
            goto label_21c8e4;
        }
    }
    ctx->pc = 0x21C8D0u;
label_21c8d0:
    // 0x21c8d0: 0x3c020032
    ctx->pc = 0x21c8d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c8d4: 0x8c44fb50
    ctx->pc = 0x21c8d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966096)));
    // 0x21c8d8: 0xc0b41b8
    ctx->pc = 0x21C8D8u;
    SET_GPR_U32(ctx, 31, 0x21C8E0u);
    ctx->pc = 0x21C8DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8E0u; }
    }
    if (ctx->pc != 0x21C8E0u) { return; }
    ctx->pc = 0x21C8E0u;
label_21c8e0:
    // 0x21c8e0: 0x3c020032
    ctx->pc = 0x21c8e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21c8e4:
    // 0x21c8e4: 0x8c44fb54
    ctx->pc = 0x21c8e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966100)));
    // 0x21c8e8: 0x10800010
    ctx->pc = 0x21C8E8u;
    {
        const bool branch_taken_0x21c8e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C8ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21c8e8) {
            ctx->pc = 0x21C92Cu;
            goto label_21c92c;
        }
    }
    ctx->pc = 0x21C8F0u;
    // 0x21c8f0: 0x8c42d594
    ctx->pc = 0x21c8f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956436)));
    // 0x21c8f4: 0x30420002
    ctx->pc = 0x21c8f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x21c8f8: 0x10400006
    ctx->pc = 0x21C8F8u;
    {
        const bool branch_taken_0x21c8f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C8FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21c8f8) {
            ctx->pc = 0x21C914u;
            goto label_21c914;
        }
    }
    ctx->pc = 0x21C900u;
    // 0x21c900: 0x24050002
    ctx->pc = 0x21c900u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c904: 0x302d
    ctx->pc = 0x21c904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c908: 0xdfbf0000
    ctx->pc = 0x21c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c90c: 0x80b41e4
    ctx->pc = 0x21C90Cu;
    ctx->pc = 0x21C910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D0790u;
    MBTreeClearFlags_0x2d0790(rdram, ctx, runtime); return;
    ctx->pc = 0x21C914u;
label_21c914:
    // 0x21c914: 0x8c44fb54
    ctx->pc = 0x21c914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966100)));
    // 0x21c918: 0x24050002
    ctx->pc = 0x21c918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c91c: 0x302d
    ctx->pc = 0x21c91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c920: 0xdfbf0000
    ctx->pc = 0x21c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c924: 0x80b41b8
    ctx->pc = 0x21C924u;
    ctx->pc = 0x21C928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D06E0u;
    MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime); return;
    ctx->pc = 0x21C92Cu;
label_21c92c:
    // 0x21c92c: 0xdfbf0000
    ctx->pc = 0x21c92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c930: 0x3e00008
    ctx->pc = 0x21C930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C888u: goto label_21c888;
            case 0x21C894u: goto label_21c894;
            case 0x21C89Cu: goto label_21c89c;
            case 0x21C8D0u: goto label_21c8d0;
            case 0x21C8E0u: goto label_21c8e0;
            case 0x21C8E4u: goto label_21c8e4;
            case 0x21C914u: goto label_21c914;
            case 0x21C92Cu: goto label_21c92c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C938u;
}
