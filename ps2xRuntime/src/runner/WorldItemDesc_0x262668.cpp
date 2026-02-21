#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldItemDesc
// Address: 0x262668 - 0x262678
void WorldItemDesc_0x262668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262668u;

    // 0x262668: 0x3c020034
    ctx->pc = 0x262668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26266c: 0x8c42e7c0
    ctx->pc = 0x26266cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262670: 0x3e00008
    ctx->pc = 0x262670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262678u;
}
