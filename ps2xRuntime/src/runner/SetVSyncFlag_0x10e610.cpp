#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVSyncFlag
// Address: 0x10e610 - 0x10e620
void SetVSyncFlag_0x10e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e610u;

    // 0x10e610: 0x24030073
    ctx->pc = 0x10e610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 115));
    // 0x10e614: 0xc
    ctx->pc = 0x10e614u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e618: 0x3e00008
    ctx->pc = 0x10E618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E620u;
}
