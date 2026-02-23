#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iEnableDmacHandler
// Address: 0x154af0 - 0x154b00
void iEnableDmacHandler_0x154af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iEnableDmacHandler");


    ctx->pc = 0x154af0u;

    // 0x154af0: 0x2403ffa2
    ctx->pc = 0x154af0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x154af4: 0xc
    ctx->pc = 0x154af4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154af8: 0x3e00008
    ctx->pc = 0x154AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B00u;
}
