#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVSyncFlag
// Address: 0x303950 - 0x303960
void SetVSyncFlag_0x303950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303950u;

    // 0x303950: 0x24030073
    ctx->pc = 0x303950u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 115));
    // 0x303954: 0xc
    ctx->pc = 0x303954u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303958: 0x3e00008
    ctx->pc = 0x303958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303960u;
}
