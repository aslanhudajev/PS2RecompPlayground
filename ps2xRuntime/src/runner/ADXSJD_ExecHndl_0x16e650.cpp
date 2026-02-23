#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_ExecHndl
// Address: 0x16e650 - 0x16e680
void ADXSJD_ExecHndl_0x16e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_ExecHndl");


    ctx->pc = 0x16e650u;

    // 0x16e650: 0x80830001
    ctx->pc = 0x16e650u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x16e654: 0x24020002
    ctx->pc = 0x16e654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e658: 0x14620003
    ctx->pc = 0x16E658u;
    {
        const bool branch_taken_0x16e658 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16E65Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16e658) {
            ctx->pc = 0x16E668u;
            goto label_16e668;
        }
    }
    ctx->pc = 0x16E660u;
    // 0x16e660: 0x805b972
    ctx->pc = 0x16E660u;
    ctx->pc = 0x16E5C8u;
    adxsjd_decode_exec_0x16e5c8(rdram, ctx, runtime); return;
    ctx->pc = 0x16E668u;
label_16e668:
    // 0x16e668: 0x14620003
    ctx->pc = 0x16E668u;
    {
        const bool branch_taken_0x16e668 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16e668) {
            ctx->pc = 0x16E678u;
            goto label_16e678;
        }
    }
    ctx->pc = 0x16E670u;
    // 0x16e670: 0x805b7c0
    ctx->pc = 0x16E670u;
    ctx->pc = 0x16DF00u;
    adxsjd_decode_prep_0x16df00(rdram, ctx, runtime); return;
    ctx->pc = 0x16E678u;
label_16e678:
    // 0x16e678: 0x3e00008
    ctx->pc = 0x16E678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E668u: goto label_16e668;
            case 0x16E678u: goto label_16e678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E680u;
}
