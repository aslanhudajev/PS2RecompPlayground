#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _iDisableDmac
// Address: 0x1546b0 - 0x1546c0
void _iDisableDmac_0x1546b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_iDisableDmac");


    ctx->pc = 0x1546b0u;

    // 0x1546b0: 0x2403ffe3
    ctx->pc = 0x1546b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x1546b4: 0xc
    ctx->pc = 0x1546b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1546b8: 0x3e00008
    ctx->pc = 0x1546B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1546C0u;
}
