#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_GetBufPtr
// Address: 0x17c400 - 0x17c408
void SJMEM_GetBufPtr_0x17c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_GetBufPtr");


    ctx->pc = 0x17c400u;

    // 0x17c400: 0x3e00008
    ctx->pc = 0x17C400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C404u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C408u;
}
