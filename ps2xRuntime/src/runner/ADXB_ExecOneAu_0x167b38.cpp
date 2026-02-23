#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAu
// Address: 0x167b38 - 0x167b68
void ADXB_ExecOneAu_0x167b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAu");


    ctx->pc = 0x167b38u;

    // 0x167b38: 0x848300aa
    ctx->pc = 0x167b38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x167b3c: 0x24020002
    ctx->pc = 0x167b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x167b40: 0x14620003
    ctx->pc = 0x167B40u;
    {
        const bool branch_taken_0x167b40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x167B44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x167b40) {
            ctx->pc = 0x167B50u;
            goto label_167b50;
        }
    }
    ctx->pc = 0x167B48u;
    // 0x167b48: 0x8059e66
    ctx->pc = 0x167B48u;
    ctx->pc = 0x167998u;
    ADXB_ExecOneAuUlaw_0x167998(rdram, ctx, runtime); return;
    ctx->pc = 0x167B50u;
label_167b50:
    // 0x167b50: 0x14620003
    ctx->pc = 0x167B50u;
    {
        const bool branch_taken_0x167b50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x167b50) {
            ctx->pc = 0x167B60u;
            goto label_167b60;
        }
    }
    ctx->pc = 0x167B58u;
    // 0x167b58: 0x8059e08
    ctx->pc = 0x167B58u;
    ctx->pc = 0x167820u;
    ADXB_ExecOneAu8_0x167820(rdram, ctx, runtime); return;
    ctx->pc = 0x167B60u;
label_167b60:
    // 0x167b60: 0x8059da2
    ctx->pc = 0x167B60u;
    ctx->pc = 0x167688u;
    ADXB_ExecOneAu16_0x167688(rdram, ctx, runtime); return;
    ctx->pc = 0x167B68u;
}
