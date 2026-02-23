#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_AdjDiscard
// Address: 0x1901b8 - 0x19023c
void sfadxt_AdjDiscard_0x1901b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_AdjDiscard");


    ctx->pc = 0x1901b8u;

    // 0x1901b8: 0x27bdff90
    ctx->pc = 0x1901b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1901bc: 0xffb20030
    ctx->pc = 0x1901bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1901c0: 0xffb40050
    ctx->pc = 0x1901c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1901c4: 0xc0902d
    ctx->pc = 0x1901c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901c8: 0xffb30040
    ctx->pc = 0x1901c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1901cc: 0x24140001
    ctx->pc = 0x1901ccu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1901d0: 0xffb10020
    ctx->pc = 0x1901d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1901d4: 0xa0982d
    ctx->pc = 0x1901d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901d8: 0xffb00010
    ctx->pc = 0x1901d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1901dc: 0x882d
    ctx->pc = 0x1901dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901e0: 0xffbf0060
    ctx->pc = 0x1901e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1901e4: 0x80802d
    ctx->pc = 0x1901e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901e8: 0x10000002
    ctx->pc = 0x1901E8u;
    {
        const bool branch_taken_0x1901e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1901ECu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1901e8) {
            ctx->pc = 0x1901F4u;
            goto label_1901f4;
        }
    }
    ctx->pc = 0x1901F0u;
label_1901f0:
    // 0x1901f0: 0x26310012
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 18));
label_1901f4:
    // 0x1901f4: 0x233102a
    ctx->pc = 0x1901f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x1901f8: 0x10400007
    ctx->pc = 0x1901F8u;
    {
        const bool branch_taken_0x1901f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1901FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1901f8) {
            ctx->pc = 0x190218u;
            goto label_190218;
        }
    }
    ctx->pc = 0x190200u;
    // 0x190200: 0x24050012
    ctx->pc = 0x190200u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x190204: 0xc05ca7e
    ctx->pc = 0x190204u;
    SET_GPR_U32(ctx, 31, 0x19020Cu);
    ctx->pc = 0x190208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1729F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_IsEndcode_0x1729f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19020Cu; }
        else if (ctx->pc != 0x19020Cu) { ctx->pc = 0x19020Cu; }
    }
    if (ctx->pc != 0x19020Cu) { return; }
    ctx->pc = 0x19020Cu;
    // 0x19020c: 0x1040fff8
    ctx->pc = 0x19020Cu;
    {
        const bool branch_taken_0x19020c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190210u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18));
        if (branch_taken_0x19020c) {
            ctx->pc = 0x1901F0u;
            goto label_1901f0;
        }
    }
    ctx->pc = 0x190214u;
    // 0x190214: 0xae540000
    ctx->pc = 0x190214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_190218:
    // 0x190218: 0x220102d
    ctx->pc = 0x190218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19021c: 0xdfbf0060
    ctx->pc = 0x19021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190220: 0xdfb40050
    ctx->pc = 0x190220u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190224: 0xdfb30040
    ctx->pc = 0x190224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190228: 0xdfb20030
    ctx->pc = 0x190228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19022c: 0xdfb10020
    ctx->pc = 0x19022cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190230: 0xdfb00010
    ctx->pc = 0x190230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190234: 0x3e00008
    ctx->pc = 0x190234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190238u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1901F0u: goto label_1901f0;
            case 0x1901F4u: goto label_1901f4;
            case 0x190218u: goto label_190218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19023Cu;
}
