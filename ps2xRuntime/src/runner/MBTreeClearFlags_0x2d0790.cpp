#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeClearFlags
// Address: 0x2d0790 - 0x2d084c
void MBTreeClearFlags_0x2d0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0790u;

label_2d0790:
    // 0x2d0790: 0x27bdffa0
    ctx->pc = 0x2d0790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0794: 0xffbf0050
    ctx->pc = 0x2d0794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d0798: 0xffb40040
    ctx->pc = 0x2d0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d079c: 0xffb30030
    ctx->pc = 0x2d079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d07a0: 0xffb20020
    ctx->pc = 0x2d07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d07a4: 0xffb10010
    ctx->pc = 0x2d07a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d07a8: 0xffb00000
    ctx->pc = 0x2d07a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d07ac: 0x80802d
    ctx->pc = 0x2d07acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07b0: 0xa0902d
    ctx->pc = 0x2d07b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07b4: 0xc0882d
    ctx->pc = 0x2d07b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07b8: 0x129827
    ctx->pc = 0x2d07b8u;
    SET_GPR_U32(ctx, 19, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x2d07bc: 0x1000000b
    ctx->pc = 0x2D07BCu;
    {
        const bool branch_taken_0x2d07bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D07C0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d07bc) {
            ctx->pc = 0x2D07ECu;
            goto label_2d07ec;
        }
    }
    ctx->pc = 0x2D07C4u;
    // 0x2d07c4: 0x0
    ctx->pc = 0x2d07c4u;
    // NOP
label_2d07c8:
    // 0x2d07c8: 0x12000019
    ctx->pc = 0x2D07C8u;
    {
        const bool branch_taken_0x2d07c8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D07CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2d07c8) {
            ctx->pc = 0x2D0830u;
            goto label_2d0830;
        }
    }
    ctx->pc = 0x2D07D0u;
    // 0x2d07d0: 0x8e10007c
    ctx->pc = 0x2d07d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d07d4: 0x52000017
    ctx->pc = 0x2D07D4u;
    {
        const bool branch_taken_0x2d07d4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d07d4) {
            ctx->pc = 0x2D07D8u;
            SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x2D0834u;
            goto label_2d0834;
        }
    }
    ctx->pc = 0x2D07DCu;
    // 0x2d07dc: 0x8e020060
    ctx->pc = 0x2d07dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d07e0: 0x30420010
    ctx->pc = 0x2d07e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d07e4: 0x1440fff8
    ctx->pc = 0x2D07E4u;
    {
        const bool branch_taken_0x2d07e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d07e4) {
            ctx->pc = 0x2D07C8u;
            goto label_2d07c8;
        }
    }
    ctx->pc = 0x2D07ECu;
label_2d07ec:
    // 0x2d07ec: 0x52000010
    ctx->pc = 0x2D07ECu;
    {
        const bool branch_taken_0x2d07ec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d07ec) {
            ctx->pc = 0x2D07F0u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->pc = 0x2D0830u;
            goto label_2d0830;
        }
    }
    ctx->pc = 0x2D07F4u;
    // 0x2d07f4: 0x8e020060
    ctx->pc = 0x2d07f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d07f8: 0x2621024
    ctx->pc = 0x2d07f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d07fc: 0x1220000a
    ctx->pc = 0x2D07FCu;
    {
        const bool branch_taken_0x2d07fc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0800u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x2d07fc) {
            ctx->pc = 0x2D0828u;
            goto label_2d0828;
        }
    }
    ctx->pc = 0x2D0804u;
    // 0x2d0804: 0x8e040078
    ctx->pc = 0x2d0804u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d0808: 0x10800007
    ctx->pc = 0x2D0808u;
    {
        const bool branch_taken_0x2d0808 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0808) {
            ctx->pc = 0x2D0828u;
            goto label_2d0828;
        }
    }
    ctx->pc = 0x2D0810u;
    // 0x2d0810: 0x8c820060
    ctx->pc = 0x2d0810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d0814: 0x30420010
    ctx->pc = 0x2d0814u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d0818: 0x14400003
    ctx->pc = 0x2D0818u;
    {
        const bool branch_taken_0x2d0818 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D081Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0818) {
            ctx->pc = 0x2D0828u;
            goto label_2d0828;
        }
    }
    ctx->pc = 0x2D0820u;
    // 0x2d0820: 0xc0b41e4
    ctx->pc = 0x2D0820u;
    SET_GPR_U32(ctx, 31, 0x2D0828u);
    ctx->pc = 0x2D0824u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0790u;
    goto label_2d0790;
    ctx->pc = 0x2D0828u;
label_2d0828:
    // 0x2d0828: 0x1234ffe7
    ctx->pc = 0x2D0828u;
    {
        const bool branch_taken_0x2d0828 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 20));
        ctx->pc = 0x2D082Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2d0828) {
            ctx->pc = 0x2D07C8u;
            goto label_2d07c8;
        }
    }
    ctx->pc = 0x2D0830u;
label_2d0830:
    // 0x2d0830: 0xdfb40040
    ctx->pc = 0x2d0830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d0834:
    // 0x2d0834: 0xdfb30030
    ctx->pc = 0x2d0834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0838: 0xdfb20020
    ctx->pc = 0x2d0838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d083c: 0xdfb10010
    ctx->pc = 0x2d083cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0840: 0xdfb00000
    ctx->pc = 0x2d0840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0844: 0x3e00008
    ctx->pc = 0x2D0844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0848u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0790u: goto label_2d0790;
            case 0x2D07C8u: goto label_2d07c8;
            case 0x2D07ECu: goto label_2d07ec;
            case 0x2D0828u: goto label_2d0828;
            case 0x2D0830u: goto label_2d0830;
            case 0x2D0834u: goto label_2d0834;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D084Cu;
}
