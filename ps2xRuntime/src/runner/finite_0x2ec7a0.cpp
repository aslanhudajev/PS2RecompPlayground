#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: finite
// Address: 0x2ec7a0 - 0x2ec7c0
void finite_0x2ec7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ec7a0u;

    // 0x2ec7a0: 0x4103f
    ctx->pc = 0x2ec7a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2ec7a4: 0x3c037fff
    ctx->pc = 0x2ec7a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x2ec7a8: 0x3463ffff
    ctx->pc = 0x2ec7a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ec7ac: 0x3c048010
    ctx->pc = 0x2ec7acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32784 << 16));
    // 0x2ec7b0: 0x431024
    ctx->pc = 0x2ec7b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec7b4: 0x441021
    ctx->pc = 0x2ec7b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ec7b8: 0x3e00008
    ctx->pc = 0x2EC7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC7BCu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC7C0u;
}
