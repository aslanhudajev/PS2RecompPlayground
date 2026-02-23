#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetDefDev
// Address: 0x174810 - 0x17481c
void cvFsGetDefDev_0x174810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetDefDev");


    ctx->pc = 0x174810u;

    // 0x174810: 0x3c02002e
    ctx->pc = 0x174810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x174814: 0x3e00008
    ctx->pc = 0x174814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174818u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964456));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17481Cu;
}
