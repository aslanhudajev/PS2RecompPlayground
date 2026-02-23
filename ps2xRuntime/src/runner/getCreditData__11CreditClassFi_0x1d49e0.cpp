#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getCreditData__11CreditClassFi
// Address: 0x1d49e0 - 0x1d4a04
void getCreditData__11CreditClassFi_0x1d49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getCreditData__11CreditClassFi");


    ctx->pc = 0x1d49e0u;

    // 0x1d49e0: 0x8c820034
    ctx->pc = 0x1d49e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d49e4: 0x14400003
    ctx->pc = 0x1D49E4u;
    {
        const bool branch_taken_0x1d49e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D49E8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x1d49e4) {
            ctx->pc = 0x1D49F4u;
            goto label_1d49f4;
        }
    }
    ctx->pc = 0x1D49ECu;
    // 0x1d49ec: 0x10000003
    ctx->pc = 0x1D49ECu;
    {
        const bool branch_taken_0x1d49ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D49F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x1d49ec) {
            ctx->pc = 0x1D49FCu;
            goto label_1d49fc;
        }
    }
    ctx->pc = 0x1D49F4u;
label_1d49f4:
    // 0x1d49f4: 0x821021
    ctx->pc = 0x1d49f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d49f8: 0x24420010
    ctx->pc = 0x1d49f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
label_1d49fc:
    // 0x1d49fc: 0x3e00008
    ctx->pc = 0x1D49FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D49F4u: goto label_1d49f4;
            case 0x1D49FCu: goto label_1d49fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4A04u;
}
