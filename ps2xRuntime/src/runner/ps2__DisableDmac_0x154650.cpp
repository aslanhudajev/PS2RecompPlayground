#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _DisableDmac
// Address: 0x154650 - 0x154660
void ps2__DisableDmac_0x154650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__DisableDmac");


    ctx->pc = 0x154650u;

    // 0x154650: 0x24030017
    ctx->pc = 0x154650u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
    // 0x154654: 0xc
    ctx->pc = 0x154654u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154658: 0x3e00008
    ctx->pc = 0x154658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154660u;
}
