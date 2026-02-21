#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBScreenWidth
// Address: 0x2a8db0 - 0x2a8dc4
void MBScreenWidth_0x2a8db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8db0u;

    // 0x2a8db0: 0x3c020036
    ctx->pc = 0x2a8db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8db4: 0x8c42dee0
    ctx->pc = 0x2a8db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8db8: 0x8c420010
    ctx->pc = 0x2a8db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a8dbc: 0x3e00008
    ctx->pc = 0x2A8DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8DC0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8DC4u;
}
