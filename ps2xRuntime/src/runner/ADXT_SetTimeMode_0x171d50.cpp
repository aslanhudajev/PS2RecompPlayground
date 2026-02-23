#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_SetTimeMode
// Address: 0x171d50 - 0x171d78
void ADXT_SetTimeMode_0x171d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_SetTimeMode");


    ctx->pc = 0x171d50u;

    // 0x171d50: 0x24020001
    ctx->pc = 0x171d50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171d54: 0x14820003
    ctx->pc = 0x171D54u;
    {
        const bool branch_taken_0x171d54 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x171D58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x171d54) {
            ctx->pc = 0x171D64u;
            goto label_171d64;
        }
    }
    ctx->pc = 0x171D5Cu;
    // 0x171d5c: 0x10000003
    ctx->pc = 0x171D5Cu;
    {
        const bool branch_taken_0x171d5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171D60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5994));
        if (branch_taken_0x171d5c) {
            ctx->pc = 0x171D6Cu;
            goto label_171d6c;
        }
    }
    ctx->pc = 0x171D64u;
label_171d64:
    // 0x171d64: 0x14820002
    ctx->pc = 0x171D64u;
    {
        const bool branch_taken_0x171d64 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x171D68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5000));
        if (branch_taken_0x171d64) {
            ctx->pc = 0x171D70u;
            goto label_171d70;
        }
    }
    ctx->pc = 0x171D6Cu;
label_171d6c:
    // 0x171d6c: 0xaf828258
    ctx->pc = 0x171d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935128), GPR_U32(ctx, 2));
label_171d70:
    // 0x171d70: 0x3e00008
    ctx->pc = 0x171D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D74u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935084), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171D64u: goto label_171d64;
            case 0x171D6Cu: goto label_171d6c;
            case 0x171D70u: goto label_171d70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171D78u;
}
