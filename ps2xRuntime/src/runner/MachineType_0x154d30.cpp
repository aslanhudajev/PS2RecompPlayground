#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MachineType
// Address: 0x154d30 - 0x154d40
void MachineType_0x154d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MachineType");


    ctx->pc = 0x154d30u;

    // 0x154d30: 0x2403007e
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 126));
    // 0x154d34: 0xc
    ctx->pc = 0x154d34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154d38: 0x3e00008
    ctx->pc = 0x154D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154D40u;
}
