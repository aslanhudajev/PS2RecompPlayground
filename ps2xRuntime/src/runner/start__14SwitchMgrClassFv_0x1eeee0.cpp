#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: start__14SwitchMgrClassFv
// Address: 0x1eeee0 - 0x1eeeec
void start__14SwitchMgrClassFv_0x1eeee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("start__14SwitchMgrClassFv");


    ctx->pc = 0x1eeee0u;

    // 0x1eeee0: 0x24030001
    ctx->pc = 0x1eeee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeee4: 0x3e00008
    ctx->pc = 0x1EEEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEEE8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEEECu;
}
