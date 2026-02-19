#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isnanf
// Address: 0x2ecbc8 - 0x2ecbec
void isnanf_0x2ecbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ecbc8u;

    // 0x2ecbc8: 0x44036000
    ctx->pc = 0x2ecbc8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[12]);
    // 0x2ecbcc: 0x60102d
    ctx->pc = 0x2ecbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbd0: 0x3c047fff
    ctx->pc = 0x2ecbd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32767 << 16));
    // 0x2ecbd4: 0x3484ffff
    ctx->pc = 0x2ecbd4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ecbd8: 0x3c037f80
    ctx->pc = 0x2ecbd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32640 << 16));
    // 0x2ecbdc: 0x441024
    ctx->pc = 0x2ecbdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ecbe0: 0x621023
    ctx->pc = 0x2ecbe0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ecbe4: 0x3e00008
    ctx->pc = 0x2ECBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECBE8u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECBECu;
}
