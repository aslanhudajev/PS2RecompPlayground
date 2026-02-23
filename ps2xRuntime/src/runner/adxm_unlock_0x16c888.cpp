#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_unlock
// Address: 0x16c888 - 0x16c8e8
void adxm_unlock_0x16c888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_unlock");


    ctx->pc = 0x16c888u;

    // 0x16c888: 0x8f828134
    ctx->pc = 0x16c888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934836)));
    // 0x16c88c: 0x27bdfff0
    ctx->pc = 0x16c88cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c890: 0xffbf0000
    ctx->pc = 0x16c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c894: 0x2442ffff
    ctx->pc = 0x16c894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16c898: 0x1440000e
    ctx->pc = 0x16C898u;
    {
        const bool branch_taken_0x16c898 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C89Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934836), GPR_U32(ctx, 2));
        if (branch_taken_0x16c898) {
            ctx->pc = 0x16C8D4u;
            goto label_16c8d4;
        }
    }
    ctx->pc = 0x16C8A0u;
    // 0x16c8a0: 0x8f828170
    ctx->pc = 0x16c8a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16c8a4: 0x10400005
    ctx->pc = 0x16C8A4u;
    {
        const bool branch_taken_0x16c8a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16c8a4) {
            ctx->pc = 0x16C8BCu;
            goto label_16c8bc;
        }
    }
    ctx->pc = 0x16C8ACu;
    // 0x16c8ac: 0x8f848170
    ctx->pc = 0x16c8acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16c8b0: 0xc05b358
    ctx->pc = 0x16C8B0u;
    SET_GPR_U32(ctx, 31, 0x16C8B8u);
    ctx->pc = 0x16CD60u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SuspendThread_0x16cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8B8u; }
        else if (ctx->pc != 0x16C8B8u) { ctx->pc = 0x16C8B8u; }
    }
    if (ctx->pc != 0x16C8B8u) { return; }
    ctx->pc = 0x16C8B8u;
    // 0x16c8b8: 0x8f838170
    ctx->pc = 0x16c8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
label_16c8bc:
    // 0x16c8bc: 0xc0551f4
    ctx->pc = 0x16C8BCu;
    SET_GPR_U32(ctx, 31, 0x16C8C4u);
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8C4u; }
        else if (ctx->pc != 0x16C8C4u) { ctx->pc = 0x16C8C4u; }
    }
    if (ctx->pc != 0x16C8C4u) { return; }
    ctx->pc = 0x16C8C4u;
    // 0x16c8c4: 0x8f8581e4
    ctx->pc = 0x16c8c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935012)));
    // 0x16c8c8: 0xc0551dc
    ctx->pc = 0x16C8C8u;
    SET_GPR_U32(ctx, 31, 0x16C8D0u);
    ctx->pc = 0x16C8CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8D0u; }
        else if (ctx->pc != 0x16C8D0u) { ctx->pc = 0x16C8D0u; }
    }
    if (ctx->pc != 0x16C8D0u) { return; }
    ctx->pc = 0x16C8D0u;
    // 0x16c8d0: 0x8f828134
    ctx->pc = 0x16c8d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934836)));
label_16c8d4:
    // 0x16c8d4: 0x4420001
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C8D8u;
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294934836), GPR_U32(ctx, 0));
            ctx->pc = 0x16C8DCu;
            goto label_16c8dc;
        }
    }
    ctx->pc = 0x16C8DCu;
label_16c8dc:
    // 0x16c8dc: 0xdfbf0000
    ctx->pc = 0x16c8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c8e0: 0x3e00008
    ctx->pc = 0x16C8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C8E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C8BCu: goto label_16c8bc;
            case 0x16C8D4u: goto label_16c8d4;
            case 0x16C8DCu: goto label_16c8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C8E8u;
}
