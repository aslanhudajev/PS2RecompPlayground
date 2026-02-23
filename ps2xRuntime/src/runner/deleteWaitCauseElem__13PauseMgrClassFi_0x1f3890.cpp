#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: deleteWaitCauseElem__13PauseMgrClassFi
// Address: 0x1f3890 - 0x1f3900
void deleteWaitCauseElem__13PauseMgrClassFi_0x1f3890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("deleteWaitCauseElem__13PauseMgrClassFi");


    ctx->pc = 0x1f3890u;

    // 0x1f3890: 0x3c030051
    ctx->pc = 0x1f3890u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1f3894: 0x24664fc0
    ctx->pc = 0x1f3894u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 20416));
    // 0x1f3898: 0x70c02628
    ctx->pc = 0x1f3898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1f389c: 0x70003e28
    ctx->pc = 0x1f389cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f38a0: 0x10000011
    ctx->pc = 0x1F38A0u;
    {
        const bool branch_taken_0x1f38a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F38A4u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f38a0) {
            ctx->pc = 0x1F38E8u;
            goto label_1f38e8;
        }
    }
    ctx->pc = 0x1F38A8u;
label_1f38a8:
    // 0x1f38a8: 0x8c830000
    ctx->pc = 0x1f38a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f38ac: 0x5065000d
    ctx->pc = 0x1F38ACu;
    {
        const bool branch_taken_0x1f38ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1f38ac) {
            ctx->pc = 0x1F38B0u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x1F38E4u;
            goto label_1f38e4;
        }
    }
    ctx->pc = 0x1F38B4u;
    // 0x1f38b4: 0x50c40009
    ctx->pc = 0x1F38B4u;
    {
        const bool branch_taken_0x1f38b4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        if (branch_taken_0x1f38b4) {
            ctx->pc = 0x1F38B8u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
            ctx->pc = 0x1F38DCu;
            goto label_1f38dc;
        }
    }
    ctx->pc = 0x1F38BCu;
    // 0x1f38bc: 0xacc30000
    ctx->pc = 0x1f38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1f38c0: 0x8c830004
    ctx->pc = 0x1f38c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f38c4: 0xacc30004
    ctx->pc = 0x1f38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1f38c8: 0x8c830008
    ctx->pc = 0x1f38c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f38cc: 0xacc30008
    ctx->pc = 0x1f38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1f38d0: 0x8c83000c
    ctx->pc = 0x1f38d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f38d4: 0xacc3000c
    ctx->pc = 0x1f38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1f38d8: 0x24c60010
    ctx->pc = 0x1f38d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
label_1f38dc:
    // 0x1f38dc: 0x25080001
    ctx->pc = 0x1f38dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f38e0: 0x24e70001
    ctx->pc = 0x1f38e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1f38e4:
    // 0x1f38e4: 0x24840010
    ctx->pc = 0x1f38e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
label_1f38e8:
    // 0x1f38e8: 0x8f838e04
    ctx->pc = 0x1f38e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f38ec: 0xe3182a
    ctx->pc = 0x1f38ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x1f38f0: 0x1460ffed
    ctx->pc = 0x1F38F0u;
    {
        const bool branch_taken_0x1f38f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f38f0) {
            ctx->pc = 0x1F38A8u;
            goto label_1f38a8;
        }
    }
    ctx->pc = 0x1F38F8u;
    // 0x1f38f8: 0x3e00008
    ctx->pc = 0x1F38F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F38FCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938116), GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F38A8u: goto label_1f38a8;
            case 0x1F38DCu: goto label_1f38dc;
            case 0x1F38E4u: goto label_1f38e4;
            case 0x1F38E8u: goto label_1f38e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3900u;
}
