#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RNACRS_Init
// Address: 0x17beb0 - 0x17beb8
void RNACRS_Init_0x17beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RNACRS_Init");


    ctx->pc = 0x17beb0u;

    // 0x17beb0: 0x3e00008
    ctx->pc = 0x17BEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEB4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935272), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BEB8u;
}
