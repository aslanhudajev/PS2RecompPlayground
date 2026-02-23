#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_Finish
// Address: 0x17c470 - 0x17c49c
void SJRBF_Finish_0x17c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_Finish");


    ctx->pc = 0x17c470u;

    // 0x17c470: 0x8f828300
    ctx->pc = 0x17c470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
    // 0x17c474: 0x2442ffff
    ctx->pc = 0x17c474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c478: 0x14400006
    ctx->pc = 0x17C478u;
    {
        const bool branch_taken_0x17c478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C47Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 2));
        if (branch_taken_0x17c478) {
            ctx->pc = 0x17C494u;
            goto label_17c494;
        }
    }
    ctx->pc = 0x17C480u;
    // 0x17c480: 0x3c040024
    ctx->pc = 0x17c480u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17c484: 0x282d
    ctx->pc = 0x17c484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c488: 0x2484f130
    ctx->pc = 0x17c488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963504));
    // 0x17c48c: 0x8050cfe
    ctx->pc = 0x17C48Cu;
    ctx->pc = 0x17C490u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3072));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C494u;
label_17c494:
    // 0x17c494: 0x3e00008
    ctx->pc = 0x17C494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C494u: goto label_17c494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C49Cu;
}
