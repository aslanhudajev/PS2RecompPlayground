#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StringTextNum
// Address: 0x202a10 - 0x202a2c
void StringTextNum_0x202a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202a10u;

    // 0x202a10: 0x3c030031
    ctx->pc = 0x202a10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x202a14: 0x24020014
    ctx->pc = 0x202a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x202a18: 0x822018
    ctx->pc = 0x202a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202a1c: 0x8c62f6c0
    ctx->pc = 0x202a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964928)));
    // 0x202a20: 0x822021
    ctx->pc = 0x202a20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202a24: 0x3e00008
    ctx->pc = 0x202A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202A2Cu;
}
