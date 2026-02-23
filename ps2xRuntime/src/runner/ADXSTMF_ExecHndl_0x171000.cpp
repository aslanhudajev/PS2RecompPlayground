#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTMF_ExecHndl
// Address: 0x171000 - 0x171020
void ADXSTMF_ExecHndl_0x171000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTMF_ExecHndl");


    ctx->pc = 0x171000u;

    // 0x171000: 0x80820001
    ctx->pc = 0x171000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x171004: 0x24030002
    ctx->pc = 0x171004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x171008: 0x14430003
    ctx->pc = 0x171008u;
    {
        const bool branch_taken_0x171008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x171008) {
            ctx->pc = 0x171018u;
            goto label_171018;
        }
    }
    ctx->pc = 0x171010u;
    // 0x171010: 0x805c34a
    ctx->pc = 0x171010u;
    ctx->pc = 0x170D28u;
    adxstmf_stat_exec_0x170d28(rdram, ctx, runtime); return;
    ctx->pc = 0x171018u;
label_171018:
    // 0x171018: 0x3e00008
    ctx->pc = 0x171018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171018u: goto label_171018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171020u;
}
