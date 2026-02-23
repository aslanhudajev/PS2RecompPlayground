#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_SetRdSct
// Address: 0x171208 - 0x171214
void ADXSTM_SetRdSct_0x171208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_SetRdSct");


    ctx->pc = 0x171208u;

    // 0x171208: 0x52ac0
    ctx->pc = 0x171208u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    // 0x17120c: 0x3e00008
    ctx->pc = 0x17120Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171210u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171214u;
}
