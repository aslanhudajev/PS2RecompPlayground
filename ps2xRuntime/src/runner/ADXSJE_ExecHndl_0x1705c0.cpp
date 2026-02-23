#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_ExecHndl
// Address: 0x1705c0 - 0x1705f0
void ADXSJE_ExecHndl_0x1705c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_ExecHndl");


    ctx->pc = 0x1705c0u;

    // 0x1705c0: 0x80830001
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1705c4: 0x24020001
    ctx->pc = 0x1705c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1705c8: 0x14620003
    ctx->pc = 0x1705C8u;
    {
        const bool branch_taken_0x1705c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1705CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1705c8) {
            ctx->pc = 0x1705D8u;
            goto label_1705d8;
        }
    }
    ctx->pc = 0x1705D0u;
    // 0x1705d0: 0x805c128
    ctx->pc = 0x1705D0u;
    ctx->pc = 0x1704A0u;
    adxsje_encode_prep_0x1704a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1705D8u;
label_1705d8:
    // 0x1705d8: 0x14620003
    ctx->pc = 0x1705D8u;
    {
        const bool branch_taken_0x1705d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1705d8) {
            ctx->pc = 0x1705E8u;
            goto label_1705e8;
        }
    }
    ctx->pc = 0x1705E0u;
    // 0x1705e0: 0x805c14c
    ctx->pc = 0x1705E0u;
    ctx->pc = 0x170530u;
    adxsje_encode_exec_0x170530(rdram, ctx, runtime); return;
    ctx->pc = 0x1705E8u;
label_1705e8:
    // 0x1705e8: 0x3e00008
    ctx->pc = 0x1705E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1705D8u: goto label_1705d8;
            case 0x1705E8u: goto label_1705e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1705F0u;
}
