#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_Finish
// Address: 0x17cb68 - 0x17cb94
void SJUNI_Finish_0x17cb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_Finish");


    ctx->pc = 0x17cb68u;

    // 0x17cb68: 0x8f828304
    ctx->pc = 0x17cb68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x17cb6c: 0x2442ffff
    ctx->pc = 0x17cb6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17cb70: 0x14400006
    ctx->pc = 0x17CB70u;
    {
        const bool branch_taken_0x17cb70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17CB74u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 2));
        if (branch_taken_0x17cb70) {
            ctx->pc = 0x17CB8Cu;
            goto label_17cb8c;
        }
    }
    ctx->pc = 0x17CB78u;
    // 0x17cb78: 0x3c040024
    ctx->pc = 0x17cb78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17cb7c: 0x282d
    ctx->pc = 0x17cb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb80: 0x2484fd60
    ctx->pc = 0x17cb80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966624));
    // 0x17cb84: 0x8050cfe
    ctx->pc = 0x17CB84u;
    ctx->pc = 0x17CB88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3072));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x17CB8Cu;
label_17cb8c:
    // 0x17cb8c: 0x3e00008
    ctx->pc = 0x17CB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CB8Cu: goto label_17cb8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17CB94u;
}
