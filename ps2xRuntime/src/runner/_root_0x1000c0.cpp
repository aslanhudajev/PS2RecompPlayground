#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _root
// Address: 0x1000c0 - 0x1000c8
void _root_0x1000c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1000c0u;

    // 0x1000c0: 0x24030023
    ctx->pc = 0x1000c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 35));
    // 0x1000c4: 0xc
    ctx->pc = 0x1000c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
}
