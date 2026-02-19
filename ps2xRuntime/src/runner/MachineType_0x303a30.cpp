#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MachineType
// Address: 0x303a30 - 0x303a40
void MachineType_0x303a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303a30u;

    // 0x303a30: 0x2403007e
    ctx->pc = 0x303a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 126));
    // 0x303a34: 0xc
    ctx->pc = 0x303a34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303a38: 0x3e00008
    ctx->pc = 0x303A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303A40u;
}
