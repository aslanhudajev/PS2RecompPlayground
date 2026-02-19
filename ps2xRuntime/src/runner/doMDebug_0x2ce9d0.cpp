#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: doMDebug
// Address: 0x2ce9d0 - 0x2ce9dc
void doMDebug_0x2ce9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ce9d0u;

    // 0x2ce9d0: 0x3c020080
    ctx->pc = 0x2ce9d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x2ce9d4: 0x3e00008
    ctx->pc = 0x2CE9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE9D8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 192));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE9DCu;
}
