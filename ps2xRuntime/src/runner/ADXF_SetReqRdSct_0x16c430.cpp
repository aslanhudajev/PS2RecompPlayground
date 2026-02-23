#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_SetReqRdSct
// Address: 0x16c430 - 0x16c454
void ADXF_SetReqRdSct_0x16c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_SetReqRdSct");


    ctx->pc = 0x16c430u;

    // 0x16c430: 0x80830001
    ctx->pc = 0x16c430u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x16c434: 0x24020002
    ctx->pc = 0x16c434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c438: 0x14620004
    ctx->pc = 0x16C438u;
    {
        const bool branch_taken_0x16c438 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16c438) {
            ctx->pc = 0x16C44Cu;
            goto label_16c44c;
        }
    }
    ctx->pc = 0x16C440u;
    // 0x16c440: 0x3c04002c
    ctx->pc = 0x16c440u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16c444: 0x805a854
    ctx->pc = 0x16C444u;
    ctx->pc = 0x16C448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940624));
    ctx->pc = 0x16A150u;
    ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime); return;
    ctx->pc = 0x16C44Cu;
label_16c44c:
    // 0x16c44c: 0x3e00008
    ctx->pc = 0x16C44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C450u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C44Cu: goto label_16c44c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C454u;
}
