#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_IsExecute
// Address: 0x1763c0 - 0x1763d0
void SRD_IsExecute_0x1763c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_IsExecute");


    ctx->pc = 0x1763c0u;

    // 0x1763c0: 0x3c030024
    ctx->pc = 0x1763c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1763c4: 0x8c62879c
    ctx->pc = 0x1763c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294936476)));
    // 0x1763c8: 0x3e00008
    ctx->pc = 0x1763C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1763D0u;
}
