#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_Reset
// Address: 0x174050 - 0x174068
void ADXPD_Reset_0x174050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_Reset");


    ctx->pc = 0x174050u;

    // 0x174050: 0x8c82000c
    ctx->pc = 0x174050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x174054: 0x24030003
    ctx->pc = 0x174054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x174058: 0x50430001
    ctx->pc = 0x174058u;
    {
        const bool branch_taken_0x174058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x174058) {
            ctx->pc = 0x17405Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x174060u;
            goto label_174060;
        }
    }
    ctx->pc = 0x174060u;
label_174060:
    // 0x174060: 0x3e00008
    ctx->pc = 0x174060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174060u: goto label_174060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174068u;
}
