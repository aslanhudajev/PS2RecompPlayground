#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddDmacHandler
// Address: 0x10dfb0 - 0x10dfc0
void AddDmacHandler_0x10dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10dfb0u;

    // 0x10dfb0: 0x24030012
    ctx->pc = 0x10dfb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x10dfb4: 0xc
    ctx->pc = 0x10dfb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10dfb8: 0x3e00008
    ctx->pc = 0x10DFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DFC0u;
}
