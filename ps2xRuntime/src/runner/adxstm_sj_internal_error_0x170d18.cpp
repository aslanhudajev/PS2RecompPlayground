#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxstm_sj_internal_error
// Address: 0x170d18 - 0x170d28
void adxstm_sj_internal_error_0x170d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxstm_sj_internal_error");


    ctx->pc = 0x170d18u;

    // 0x170d18: 0x8f828220
    ctx->pc = 0x170d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935072)));
    // 0x170d1c: 0x24420001
    ctx->pc = 0x170d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x170d20: 0x3e00008
    ctx->pc = 0x170D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D24u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170D28u;
}
