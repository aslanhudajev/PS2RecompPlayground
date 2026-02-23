#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_Start
// Address: 0x168148 - 0x168160
void ADXB_Start_0x168148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_Start");


    ctx->pc = 0x168148u;

    // 0x168148: 0x8c820004
    ctx->pc = 0x168148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16814c: 0x14400002
    ctx->pc = 0x16814Cu;
    {
        const bool branch_taken_0x16814c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16814c) {
            ctx->pc = 0x168158u;
            goto label_168158;
        }
    }
    ctx->pc = 0x168154u;
    // 0x168154: 0xac820004
    ctx->pc = 0x168154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_168158:
    // 0x168158: 0x3e00008
    ctx->pc = 0x168158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168158u: goto label_168158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168160u;
}
