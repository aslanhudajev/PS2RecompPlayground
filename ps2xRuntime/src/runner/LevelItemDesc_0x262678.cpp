#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LevelItemDesc
// Address: 0x262678 - 0x262688
void LevelItemDesc_0x262678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262678u;

    // 0x262678: 0x3c020034
    ctx->pc = 0x262678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26267c: 0x8c42e7c8
    ctx->pc = 0x26267cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x262680: 0x3e00008
    ctx->pc = 0x262680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262688u;
}
