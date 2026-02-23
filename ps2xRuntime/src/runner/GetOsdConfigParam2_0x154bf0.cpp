#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetOsdConfigParam2
// Address: 0x154bf0 - 0x154c00
void GetOsdConfigParam2_0x154bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetOsdConfigParam2");


    ctx->pc = 0x154bf0u;

    // 0x154bf0: 0x2403006f
    ctx->pc = 0x154bf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 111));
    // 0x154bf4: 0xc
    ctx->pc = 0x154bf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154bf8: 0x3e00008
    ctx->pc = 0x154BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154C00u;
}
