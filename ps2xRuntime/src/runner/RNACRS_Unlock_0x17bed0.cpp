#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RNACRS_Unlock
// Address: 0x17bed0 - 0x17bee0
void RNACRS_Unlock_0x17bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RNACRS_Unlock");


    ctx->pc = 0x17bed0u;

    // 0x17bed0: 0x8f8282e8
    ctx->pc = 0x17bed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x17bed4: 0x2442ffff
    ctx->pc = 0x17bed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17bed8: 0x3e00008
    ctx->pc = 0x17BED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEDCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935272), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BEE0u;
}
