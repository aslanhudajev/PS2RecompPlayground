#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: next_general_hint
// Address: 0x20a630 - 0x20a728
void next_general_hint_0x20a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20a630u;

    // 0x20a630: 0x27bdff90
    ctx->pc = 0x20a630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20a634: 0xffbf0060
    ctx->pc = 0x20a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20a638: 0xffb50050
    ctx->pc = 0x20a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20a63c: 0xffb40040
    ctx->pc = 0x20a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20a640: 0xffb30030
    ctx->pc = 0x20a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20a644: 0xffb20020
    ctx->pc = 0x20a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a648: 0xffb10010
    ctx->pc = 0x20a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20a64c: 0x14800007
    ctx->pc = 0x20A64Cu;
    {
        const bool branch_taken_0x20a64c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A650u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x20a64c) {
            ctx->pc = 0x20A66Cu;
            goto label_20a66c;
        }
    }
    ctx->pc = 0x20A654u;
    // 0x20a654: 0x3c020032
    ctx->pc = 0x20a654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a658: 0x2403ffff
    ctx->pc = 0x20a658u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a65c: 0xac43efe4
    ctx->pc = 0x20a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963172), GPR_U32(ctx, 3));
    // 0x20a660: 0x3c020032
    ctx->pc = 0x20a660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a664: 0x10000027
    ctx->pc = 0x20A664u;
    {
        const bool branch_taken_0x20a664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A668u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963176), GPR_U32(ctx, 3));
        if (branch_taken_0x20a664) {
            ctx->pc = 0x20A704u;
            goto label_20a704;
        }
    }
    ctx->pc = 0x20A66Cu;
label_20a66c:
    // 0x20a66c: 0x3c130032
    ctx->pc = 0x20a66cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
    // 0x20a670: 0x24150003
    ctx->pc = 0x20a670u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a674: 0x2414ffff
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20a678:
    // 0x20a678: 0x8e62efe4
    ctx->pc = 0x20a678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294963172)));
    // 0x20a67c: 0x4420001
    ctx->pc = 0x20A67Cu;
    {
        const bool branch_taken_0x20a67c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20a67c) {
            ctx->pc = 0x20A680u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294963172), GPR_U32(ctx, 21));
            ctx->pc = 0x20A684u;
            goto label_20a684;
        }
    }
    ctx->pc = 0x20A684u;
label_20a684:
    // 0x20a684: 0x3c100032
    ctx->pc = 0x20a684u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x20a688: 0x3c120032
    ctx->pc = 0x20a688u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
    // 0x20a68c: 0x10000005
    ctx->pc = 0x20A68Cu;
    {
        const bool branch_taken_0x20a68c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A690u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20a68c) {
            ctx->pc = 0x20A6A4u;
            goto label_20a6a4;
        }
    }
    ctx->pc = 0x20A694u;
    // 0x20a694: 0x0
    ctx->pc = 0x20a694u;
    // NOP
label_20a698:
    // 0x20a698: 0x2442ffff
    ctx->pc = 0x20a698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20a69c: 0xae02efe4
    ctx->pc = 0x20a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963172), GPR_U32(ctx, 2));
    // 0x20a6a0: 0xae51efe8
    ctx->pc = 0x20a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963176), GPR_U32(ctx, 17));
label_20a6a4:
    // 0x20a6a4: 0x8e04efe4
    ctx->pc = 0x20a6a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294963172)));
    // 0x20a6a8: 0x58800006
    ctx->pc = 0x20A6A8u;
    {
        const bool branch_taken_0x20a6a8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x20a6a8) {
            ctx->pc = 0x20A6ACu;
            SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
            ctx->pc = 0x20A6C4u;
            goto label_20a6c4;
        }
    }
    ctx->pc = 0x20A6B0u;
    // 0x20a6b0: 0xc09dc5e
    ctx->pc = 0x20A6B0u;
    SET_GPR_U32(ctx, 31, 0x20A6B8u);
    ctx->pc = 0x20A6B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->pc = 0x277178u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnyPlayerHasAllGargItems_0x277178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6B8u; }
    }
    if (ctx->pc != 0x20A6B8u) { return; }
    ctx->pc = 0x20A6B8u;
    // 0x20a6b8: 0x1040fff7
    ctx->pc = 0x20A6B8u;
    {
        const bool branch_taken_0x20a6b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A6BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294963172)));
        if (branch_taken_0x20a6b8) {
            ctx->pc = 0x20A698u;
            goto label_20a698;
        }
    }
    ctx->pc = 0x20A6C0u;
    // 0x20a6c0: 0x3c110032
    ctx->pc = 0x20a6c0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
label_20a6c4:
    // 0x20a6c4: 0x8e22efe8
    ctx->pc = 0x20a6c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294963176)));
    // 0x20a6c8: 0x24420001
    ctx->pc = 0x20a6c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a6cc: 0xae22efe8
    ctx->pc = 0x20a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963176), GPR_U32(ctx, 2));
    // 0x20a6d0: 0x3c100032
    ctx->pc = 0x20a6d0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x20a6d4: 0x24040001
    ctx->pc = 0x20a6d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a6d8: 0x24050003
    ctx->pc = 0x20a6d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a6dc: 0xc08086e
    ctx->pc = 0x20A6DCu;
    SET_GPR_U32(ctx, 31, 0x20A6E4u);
    ctx->pc = 0x20A6E0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294963172)));
    ctx->pc = 0x2021B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextListNum_0x2021b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6E4u; }
    }
    if (ctx->pc != 0x20A6E4u) { return; }
    ctx->pc = 0x20A6E4u;
    // 0x20a6e4: 0x8e23efe8
    ctx->pc = 0x20a6e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294963176)));
    // 0x20a6e8: 0x62182a
    ctx->pc = 0x20a6e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x20a6ec: 0x14600005
    ctx->pc = 0x20A6ECu;
    {
        const bool branch_taken_0x20a6ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A6F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294963172)));
        if (branch_taken_0x20a6ec) {
            ctx->pc = 0x20A704u;
            goto label_20a704;
        }
    }
    ctx->pc = 0x20A6F4u;
    // 0x20a6f4: 0x2442ffff
    ctx->pc = 0x20a6f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20a6f8: 0xae02efe4
    ctx->pc = 0x20a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963172), GPR_U32(ctx, 2));
    // 0x20a6fc: 0x1000ffde
    ctx->pc = 0x20A6FCu;
    {
        const bool branch_taken_0x20a6fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A700u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963176), GPR_U32(ctx, 20));
        if (branch_taken_0x20a6fc) {
            ctx->pc = 0x20A678u;
            goto label_20a678;
        }
    }
    ctx->pc = 0x20A704u;
label_20a704:
    // 0x20a704: 0xdfbf0060
    ctx->pc = 0x20a704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a708: 0xdfb50050
    ctx->pc = 0x20a708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a70c: 0xdfb40040
    ctx->pc = 0x20a70cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a710: 0xdfb30030
    ctx->pc = 0x20a710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a714: 0xdfb20020
    ctx->pc = 0x20a714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a718: 0xdfb10010
    ctx->pc = 0x20a718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a71c: 0xdfb00000
    ctx->pc = 0x20a71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a720: 0x3e00008
    ctx->pc = 0x20A720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A724u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A66Cu: goto label_20a66c;
            case 0x20A678u: goto label_20a678;
            case 0x20A684u: goto label_20a684;
            case 0x20A698u: goto label_20a698;
            case 0x20A6A4u: goto label_20a6a4;
            case 0x20A6C4u: goto label_20a6c4;
            case 0x20A704u: goto label_20a704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A728u;
}
