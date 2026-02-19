#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerSelecting
// Address: 0x232f40 - 0x232f64
void PlayerSelecting_0x232f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232f40u;

    // 0x232f40: 0x3c020032
    ctx->pc = 0x232f40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x232f44: 0x24421bc0
    ctx->pc = 0x232f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x232f48: 0x24032b00
    ctx->pc = 0x232f48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x232f4c: 0x832018
    ctx->pc = 0x232f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x232f50: 0x822021
    ctx->pc = 0x232f50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x232f54: 0x8c8200fc
    ctx->pc = 0x232f54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x232f58: 0x2442fffe
    ctx->pc = 0x232f58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x232f5c: 0x3e00008
    ctx->pc = 0x232F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232F60u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232F64u;
}
