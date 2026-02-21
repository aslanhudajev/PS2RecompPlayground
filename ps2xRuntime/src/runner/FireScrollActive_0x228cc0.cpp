#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FireScrollActive
// Address: 0x228cc0 - 0x228cd0
void FireScrollActive_0x228cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x228cc0u;

    // 0x228cc0: 0x3c020032
    ctx->pc = 0x228cc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228cc4: 0x8c420ac0
    ctx->pc = 0x228cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x228cc8: 0x3e00008
    ctx->pc = 0x228CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228CCCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228CD0u;
}
