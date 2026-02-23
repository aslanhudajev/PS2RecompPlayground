#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _EnableDmac
// Address: 0x154640 - 0x154650
void ps2__EnableDmac_0x154640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__EnableDmac");


    ctx->pc = 0x154640u;

    // 0x154640: 0x24030016
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
    // 0x154644: 0xc
    ctx->pc = 0x154644u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154648: 0x3e00008
    ctx->pc = 0x154648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154650u;
}
