#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetMatrix
// Address: 0x1a59c0 - 0x1a5a00
void nlDofSetMatrix_0x1a59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetMatrix");


    ctx->pc = 0x1a59c0u;

    // 0x1a59c0: 0xaf8089fc
    ctx->pc = 0x1a59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 0));
    // 0x1a59c4: 0x70003628
    ctx->pc = 0x1a59c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a59c8: 0x70803e28
    ctx->pc = 0x1a59c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a59cc:
    // 0x1a59cc: 0x8ce50000
    ctx->pc = 0x1a59ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a59d0: 0x8f8389fc
    ctx->pc = 0x1a59d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
    // 0x1a59d4: 0x24a50001
    ctx->pc = 0x1a59d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a59d8: 0x65082a
    ctx->pc = 0x1a59d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x1a59dc: 0x50200003
    ctx->pc = 0x1A59DCu;
    {
        const bool branch_taken_0x1a59dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a59dc) {
            ctx->pc = 0x1A59E0u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x1A59ECu;
            goto label_1a59ec;
        }
    }
    ctx->pc = 0x1A59E4u;
    // 0x1a59e4: 0xaf8589fc
    ctx->pc = 0x1a59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 5));
    // 0x1a59e8: 0x24c60001
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1a59ec:
    // 0x1a59ec: 0x28c30051
    ctx->pc = 0x1a59ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 81));
    // 0x1a59f0: 0x1460fff6
    ctx->pc = 0x1A59F0u;
    {
        const bool branch_taken_0x1a59f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A59F4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1a59f0) {
            ctx->pc = 0x1A59CCu;
            goto label_1a59cc;
        }
    }
    ctx->pc = 0x1A59F8u;
    // 0x1a59f8: 0x3e00008
    ctx->pc = 0x1A59F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A59FCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A59CCu: goto label_1a59cc;
            case 0x1A59ECu: goto label_1a59ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5A00u;
}
