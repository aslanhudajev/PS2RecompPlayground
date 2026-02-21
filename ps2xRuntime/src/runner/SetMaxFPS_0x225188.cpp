#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetMaxFPS
// Address: 0x225188 - 0x225198
void SetMaxFPS_0x225188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x225188u;

    // 0x225188: 0x3c030032
    ctx->pc = 0x225188u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22518c: 0x8c62070c
    ctx->pc = 0x22518cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1804)));
    // 0x225190: 0x3e00008
    ctx->pc = 0x225190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225194u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1804), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225198u;
}
