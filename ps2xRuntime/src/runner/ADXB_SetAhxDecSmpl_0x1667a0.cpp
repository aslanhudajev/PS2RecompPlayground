#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_SetAhxDecSmpl
// Address: 0x1667a0 - 0x1667c0
void ADXB_SetAhxDecSmpl_0x1667a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_SetAhxDecSmpl");


    ctx->pc = 0x1667a0u;

    // 0x1667a0: 0x24020060
    ctx->pc = 0x1667a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1667a4: 0xac8500b0
    ctx->pc = 0x1667a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
    // 0x1667a8: 0xa2001a
    ctx->pc = 0x1667a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1667ac: 0x50400001
    ctx->pc = 0x1667ACu;
    {
        const bool branch_taken_0x1667ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1667ac) {
            ctx->pc = 0x1667B0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1667B4u;
            goto label_1667b4;
        }
    }
    ctx->pc = 0x1667B4u;
label_1667b4:
    // 0x1667b4: 0x1812
    ctx->pc = 0x1667b4u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1667b8: 0x3e00008
    ctx->pc = 0x1667B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1667BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1667B4u: goto label_1667b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1667C0u;
}
