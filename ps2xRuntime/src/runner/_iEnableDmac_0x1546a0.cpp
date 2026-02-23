#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _iEnableDmac
// Address: 0x1546a0 - 0x1546b0
void _iEnableDmac_0x1546a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_iEnableDmac");


    ctx->pc = 0x1546a0u;

    // 0x1546a0: 0x2403ffe4
    ctx->pc = 0x1546a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x1546a4: 0xc
    ctx->pc = 0x1546a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1546a8: 0x3e00008
    ctx->pc = 0x1546A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1546B0u;
}
