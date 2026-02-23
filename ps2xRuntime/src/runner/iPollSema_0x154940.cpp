#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iPollSema
// Address: 0x154940 - 0x154950
void iPollSema_0x154940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iPollSema");


    ctx->pc = 0x154940u;

    // 0x154940: 0x2403ffba
    ctx->pc = 0x154940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x154944: 0xc
    ctx->pc = 0x154944u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154948: 0x3e00008
    ctx->pc = 0x154948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154950u;
}
