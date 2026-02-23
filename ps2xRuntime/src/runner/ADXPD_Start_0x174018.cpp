#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_Start
// Address: 0x174018 - 0x174034
void ADXPD_Start_0x174018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_Start");


    ctx->pc = 0x174018u;

    // 0x174018: 0x8c82000c
    ctx->pc = 0x174018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17401c: 0x14400003
    ctx->pc = 0x17401Cu;
    {
        const bool branch_taken_0x17401c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174020u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17401c) {
            ctx->pc = 0x17402Cu;
            goto label_17402c;
        }
    }
    ctx->pc = 0x174024u;
    // 0x174024: 0xac800010
    ctx->pc = 0x174024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x174028: 0xac82000c
    ctx->pc = 0x174028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_17402c:
    // 0x17402c: 0x3e00008
    ctx->pc = 0x17402Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17402Cu: goto label_17402c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174034u;
}
