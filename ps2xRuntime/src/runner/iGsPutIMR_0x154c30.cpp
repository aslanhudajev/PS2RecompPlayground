#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iGsPutIMR
// Address: 0x154c30 - 0x154c40
void iGsPutIMR_0x154c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iGsPutIMR");


    ctx->pc = 0x154c30u;

    // 0x154c30: 0x2403ff8f
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x154c34: 0xc
    ctx->pc = 0x154c34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154c38: 0x3e00008
    ctx->pc = 0x154C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154C40u;
}
