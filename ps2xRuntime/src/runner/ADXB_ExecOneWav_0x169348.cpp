#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneWav
// Address: 0x169348 - 0x169388
void ADXB_ExecOneWav_0x169348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneWav");


    ctx->pc = 0x169348u;

    // 0x169348: 0x848300aa
    ctx->pc = 0x169348u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x16934c: 0x24020002
    ctx->pc = 0x16934cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x169350: 0x14620003
    ctx->pc = 0x169350u;
    {
        const bool branch_taken_0x169350 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x169354u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x169350) {
            ctx->pc = 0x169360u;
            goto label_169360;
        }
    }
    ctx->pc = 0x169358u;
    // 0x169358: 0x805a454
    ctx->pc = 0x169358u;
    ctx->pc = 0x169150u;
    ADXB_ExecOneWav4_0x169150(rdram, ctx, runtime); return;
    ctx->pc = 0x169360u;
label_169360:
    // 0x169360: 0x14620003
    ctx->pc = 0x169360u;
    {
        const bool branch_taken_0x169360 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x169360) {
            ctx->pc = 0x169370u;
            goto label_169370;
        }
    }
    ctx->pc = 0x169368u;
    // 0x169368: 0x805a3f2
    ctx->pc = 0x169368u;
    ctx->pc = 0x168FC8u;
    ADXB_ExecOneWav8_0x168fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x169370u;
label_169370:
    // 0x169370: 0x14600003
    ctx->pc = 0x169370u;
    {
        const bool branch_taken_0x169370 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x169370) {
            ctx->pc = 0x169380u;
            goto label_169380;
        }
    }
    ctx->pc = 0x169378u;
    // 0x169378: 0x805a394
    ctx->pc = 0x169378u;
    ctx->pc = 0x168E50u;
    ADXB_ExecOneWav16_0x168e50(rdram, ctx, runtime); return;
    ctx->pc = 0x169380u;
label_169380:
    // 0x169380: 0x3e00008
    ctx->pc = 0x169380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169360u: goto label_169360;
            case 0x169370u: goto label_169370;
            case 0x169380u: goto label_169380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169388u;
}
