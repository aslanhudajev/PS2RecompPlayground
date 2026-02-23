#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_SetStartTime
// Address: 0x19dd90 - 0x19dd9c
void SFTIM_SetStartTime_0x19dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_SetStartTime");


    ctx->pc = 0x19dd90u;

    // 0x19dd90: 0xac86010c
    ctx->pc = 0x19dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 6));
    // 0x19dd94: 0x3e00008
    ctx->pc = 0x19DD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DD98u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DD9Cu;
}
