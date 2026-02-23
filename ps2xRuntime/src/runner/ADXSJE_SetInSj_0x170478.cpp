#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_SetInSj
// Address: 0x170478 - 0x170494
void ADXSJE_SetInSj_0x170478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_SetInSj");


    ctx->pc = 0x170478u;

    // 0x170478: 0x2ca20002
    ctx->pc = 0x170478u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 2));
    // 0x17047c: 0x10400003
    ctx->pc = 0x17047Cu;
    {
        const bool branch_taken_0x17047c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x170480u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x17047c) {
            ctx->pc = 0x17048Cu;
            goto label_17048c;
        }
    }
    ctx->pc = 0x170484u;
    // 0x170484: 0x821021
    ctx->pc = 0x170484u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170488: 0xac460004
    ctx->pc = 0x170488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_17048c:
    // 0x17048c: 0x3e00008
    ctx->pc = 0x17048Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17048Cu: goto label_17048c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170494u;
}
