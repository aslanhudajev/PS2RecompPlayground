#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_GetTimeOneFrmVideo
// Address: 0x19e6b0 - 0x19e6ec
void SFTIM_GetTimeOneFrmVideo_0x19e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_GetTimeOneFrmVideo");


    ctx->pc = 0x19e6b0u;

    // 0x19e6b0: 0x8c830914
    ctx->pc = 0x19e6b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2324)));
    // 0x19e6b4: 0x14600005
    ctx->pc = 0x19E6B4u;
    {
        const bool branch_taken_0x19e6b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E6B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x19e6b4) {
            ctx->pc = 0x19E6CCu;
            goto label_19e6cc;
        }
    }
    ctx->pc = 0x19E6BCu;
    // 0x19e6bc: 0xaca00000
    ctx->pc = 0x19e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x19e6c0: 0x24027512
    ctx->pc = 0x19e6c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29970));
    // 0x19e6c4: 0x3e00008
    ctx->pc = 0x19E6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6C8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E6CCu: goto label_19e6cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E6CCu;
label_19e6cc:
    // 0x19e6cc: 0x31880
    ctx->pc = 0x19e6ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e6d0: 0x2442d5f0
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956528));
    // 0x19e6d4: 0x240403e8
    ctx->pc = 0x19e6d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19e6d8: 0x621821
    ctx->pc = 0x19e6d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e6dc: 0xaca40000
    ctx->pc = 0x19e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x19e6e0: 0x8c620000
    ctx->pc = 0x19e6e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e6e4: 0x3e00008
    ctx->pc = 0x19E6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6E8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E6CCu: goto label_19e6cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E6ECu;
}
