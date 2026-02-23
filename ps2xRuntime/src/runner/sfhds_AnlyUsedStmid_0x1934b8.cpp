#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_AnlyUsedStmid
// Address: 0x1934b8 - 0x193530
void sfhds_AnlyUsedStmid_0x1934b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_AnlyUsedStmid");


    ctx->pc = 0x1934b8u;

    // 0x1934b8: 0x27bdffb0
    ctx->pc = 0x1934b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1934bc: 0xffb10020
    ctx->pc = 0x1934bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1934c0: 0xffb00010
    ctx->pc = 0x1934c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1934c4: 0xc0882d
    ctx->pc = 0x1934c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934c8: 0xffb20030
    ctx->pc = 0x1934c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1934cc: 0xa0802d
    ctx->pc = 0x1934ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934d0: 0xffbf0040
    ctx->pc = 0x1934d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1934d4: 0x230102a
    ctx->pc = 0x1934d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x1934d8: 0x1440000e
    ctx->pc = 0x1934D8u;
    {
        const bool branch_taken_0x1934d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1934DCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1934d8) {
            ctx->pc = 0x193514u;
            goto label_193514;
        }
    }
    ctx->pc = 0x1934E0u;
    // 0x1934e0: 0x240202d
    ctx->pc = 0x1934e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934e4: 0x0
    ctx->pc = 0x1934e4u;
    // NOP
label_1934e8:
    // 0x1934e8: 0x320500ff
    ctx->pc = 0x1934e8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 255));
    // 0x1934ec: 0xc067f68
    ctx->pc = 0x1934ECu;
    SET_GPR_U32(ctx, 31, 0x1934F4u);
    ctx->pc = 0x1934F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_IsExistStmId_0x19fda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934F4u; }
        else if (ctx->pc != 0x1934F4u) { ctx->pc = 0x1934F4u; }
    }
    if (ctx->pc != 0x1934F4u) { return; }
    ctx->pc = 0x1934F4u;
    // 0x1934f4: 0x10400003
    ctx->pc = 0x1934F4u;
    {
        const bool branch_taken_0x1934f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1934F8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1934f4) {
            ctx->pc = 0x193504u;
            goto label_193504;
        }
    }
    ctx->pc = 0x1934FCu;
    // 0x1934fc: 0x14400006
    ctx->pc = 0x1934FCu;
    {
        const bool branch_taken_0x1934fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193500u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1934fc) {
            ctx->pc = 0x193518u;
            goto label_193518;
        }
    }
    ctx->pc = 0x193504u;
label_193504:
    // 0x193504: 0x26100001
    ctx->pc = 0x193504u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x193508: 0x230102a
    ctx->pc = 0x193508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x19350c: 0x1040fff6
    ctx->pc = 0x19350Cu;
    {
        const bool branch_taken_0x19350c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193510u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19350c) {
            ctx->pc = 0x1934E8u;
            goto label_1934e8;
        }
    }
    ctx->pc = 0x193514u;
label_193514:
    // 0x193514: 0x102d
    ctx->pc = 0x193514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193518:
    // 0x193518: 0xdfbf0040
    ctx->pc = 0x193518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19351c: 0xdfb20030
    ctx->pc = 0x19351cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193520: 0xdfb10020
    ctx->pc = 0x193520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193524: 0xdfb00010
    ctx->pc = 0x193524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193528: 0x3e00008
    ctx->pc = 0x193528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19352Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1934E8u: goto label_1934e8;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193518u: goto label_193518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193530u;
}
