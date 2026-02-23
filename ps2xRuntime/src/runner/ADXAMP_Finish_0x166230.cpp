#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_Finish
// Address: 0x166230 - 0x16625c
void ADXAMP_Finish_0x166230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_Finish");


    ctx->pc = 0x166230u;

    // 0x166230: 0x8f828090
    ctx->pc = 0x166230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x166234: 0x2442ffff
    ctx->pc = 0x166234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166238: 0x14400006
    ctx->pc = 0x166238u;
    {
        const bool branch_taken_0x166238 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16623Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934672), GPR_U32(ctx, 2));
        if (branch_taken_0x166238) {
            ctx->pc = 0x166254u;
            goto label_166254;
        }
    }
    ctx->pc = 0x166240u;
    // 0x166240: 0x3c040023
    ctx->pc = 0x166240u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x166244: 0x282d
    ctx->pc = 0x166244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166248: 0x2484ab50
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945616));
    // 0x16624c: 0x8050cfe
    ctx->pc = 0x16624Cu;
    ctx->pc = 0x166250u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x166254u;
label_166254:
    // 0x166254: 0x3e00008
    ctx->pc = 0x166254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166254u: goto label_166254;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16625Cu;
}
