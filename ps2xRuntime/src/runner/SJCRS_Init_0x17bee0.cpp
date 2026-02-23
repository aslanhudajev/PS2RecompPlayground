#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJCRS_Init
// Address: 0x17bee0 - 0x17beec
void SJCRS_Init_0x17bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJCRS_Init");


    ctx->pc = 0x17bee0u;

    // 0x17bee0: 0xaf8082f0
    ctx->pc = 0x17bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 0));
    // 0x17bee4: 0x3e00008
    ctx->pc = 0x17BEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BEECu;
}
