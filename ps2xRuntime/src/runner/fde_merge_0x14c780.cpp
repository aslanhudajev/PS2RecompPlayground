#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fde_merge
// Address: 0x14c780 - 0x14c87c
void fde_merge_0x14c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fde_merge");


    ctx->pc = 0x14c780u;

    // 0x14c780: 0x27bdffd0
    ctx->pc = 0x14c780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c784: 0xffb10010
    ctx->pc = 0x14c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x14c788: 0xffb20020
    ctx->pc = 0x14c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14c78c: 0x80882d
    ctx->pc = 0x14c78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c790: 0xffb00000
    ctx->pc = 0x14c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c794: 0x8cb80004
    ctx->pc = 0x14c794u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14c798: 0x13000033
    ctx->pc = 0x14C798u;
    {
        const bool branch_taken_0x14c798 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C79Cu;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c798) {
            ctx->pc = 0x14C868u;
            goto label_14c868;
        }
    }
    ctx->pc = 0x14C7A0u;
    // 0x14c7a0: 0x8e300004
    ctx->pc = 0x14c7a0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14c7a4: 0x182080
    ctx->pc = 0x14c7a4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 24), 2));
    // 0x14c7a8: 0x8e390000
    ctx->pc = 0x14c7a8u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c7ac: 0x8ca30000
    ctx->pc = 0x14c7acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c7b0: 0x101080
    ctx->pc = 0x14c7b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x14c7b4: 0x320782d
    ctx->pc = 0x14c7b4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7b8: 0x2442fffc
    ctx->pc = 0x14c7b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x14c7bc: 0x832821
    ctx->pc = 0x14c7bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14c7c0: 0x1e0902d
    ctx->pc = 0x14c7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7c4: 0x40502d
    ctx->pc = 0x14c7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7c8: 0x8f2021
    ctx->pc = 0x14c7c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x14c7cc: 0x200482d
    ctx->pc = 0x14c7ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7d0: 0x4f5821
    ctx->pc = 0x14c7d0u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x14c7d4: 0x0
    ctx->pc = 0x14c7d4u;
    // NOP
label_14c7d8:
    // 0x14c7d8: 0x24a5fffc
    ctx->pc = 0x14c7d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x14c7dc: 0x2484fffc
    ctx->pc = 0x14c7dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x14c7e0: 0x8cae0000
    ctx->pc = 0x14c7e0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c7e4: 0x11200019
    ctx->pc = 0x14C7E4u;
    {
        const bool branch_taken_0x14c7e4 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C7E8u;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4294967295));
        if (branch_taken_0x14c7e4) {
            ctx->pc = 0x14C84Cu;
            goto label_14c84c;
        }
    }
    ctx->pc = 0x14C7ECu;
    // 0x14c7ec: 0x8d630000
    ctx->pc = 0x14c7ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14c7f0: 0x8dc60008
    ctx->pc = 0x14c7f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x14c7f4: 0x8c620008
    ctx->pc = 0x14c7f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14c7f8: 0x461023
    ctx->pc = 0x14c7f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14c7fc: 0x18400013
    ctx->pc = 0x14C7FCu;
    {
        const bool branch_taken_0x14c7fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14C800u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
        if (branch_taken_0x14c7fc) {
            ctx->pc = 0x14C84Cu;
            goto label_14c84c;
        }
    }
    ctx->pc = 0x14C804u;
    // 0x14c804: 0xc0602d
    ctx->pc = 0x14c804u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c808: 0x444021
    ctx->pc = 0x14c808u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14c80c: 0x1593821
    ctx->pc = 0x14c80cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x14c810: 0x1523021
    ctx->pc = 0x14c810u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x14c814: 0x8cc20000
    ctx->pc = 0x14c814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14c818:
    // 0x14c818: 0x24e7fffc
    ctx->pc = 0x14c818u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x14c81c: 0x24c6fffc
    ctx->pc = 0x14c81cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x14c820: 0x256bfffc
    ctx->pc = 0x14c820u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x14c824: 0xad020000
    ctx->pc = 0x14c824u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x14c828: 0x254afffc
    ctx->pc = 0x14c828u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x14c82c: 0x2529ffff
    ctx->pc = 0x14c82cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x14c830: 0x11200006
    ctx->pc = 0x14C830u;
    {
        const bool branch_taken_0x14c830 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C834u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x14c830) {
            ctx->pc = 0x14C84Cu;
            goto label_14c84c;
        }
    }
    ctx->pc = 0x14C838u;
    // 0x14c838: 0x8ce30000
    ctx->pc = 0x14c838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14c83c: 0x8c620008
    ctx->pc = 0x14c83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14c840: 0x4c1023
    ctx->pc = 0x14c840u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x14c844: 0x5c40fff4
    ctx->pc = 0x14C844u;
    {
        const bool branch_taken_0x14c844 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x14c844) {
            ctx->pc = 0x14C848u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x14C818u;
            goto label_14c818;
        }
    }
    ctx->pc = 0x14C84Cu;
label_14c84c:
    // 0x14c84c: 0x12d1021
    ctx->pc = 0x14c84cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x14c850: 0x21080
    ctx->pc = 0x14c850u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c854: 0x4f1021
    ctx->pc = 0x14c854u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x14c858: 0x15a0ffdf
    ctx->pc = 0x14C858u;
    {
        const bool branch_taken_0x14c858 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C85Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
        if (branch_taken_0x14c858) {
            ctx->pc = 0x14C7D8u;
            goto label_14c7d8;
        }
    }
    ctx->pc = 0x14C860u;
    // 0x14c860: 0x2181021
    ctx->pc = 0x14c860u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x14c864: 0xae220004
    ctx->pc = 0x14c864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_14c868:
    // 0x14c868: 0xdfb20020
    ctx->pc = 0x14c868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c86c: 0xdfb10010
    ctx->pc = 0x14c86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c870: 0xdfb00000
    ctx->pc = 0x14c870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c874: 0x3e00008
    ctx->pc = 0x14C874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C878u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C7D8u: goto label_14c7d8;
            case 0x14C818u: goto label_14c818;
            case 0x14C84Cu: goto label_14c84c;
            case 0x14C868u: goto label_14c868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C87Cu;
}
