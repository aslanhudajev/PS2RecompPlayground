#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: KSeg0
// Address: 0x154b20 - 0x154b30
void KSeg0_0x154b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("KSeg0");


    ctx->pc = 0x154b20u;

    // 0x154b20: 0x24030060
    ctx->pc = 0x154b20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 96));
    // 0x154b24: 0xc
    ctx->pc = 0x154b24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154b28: 0x3e00008
    ctx->pc = 0x154B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B30u;
}
