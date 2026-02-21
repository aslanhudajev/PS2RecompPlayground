#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: finitef
// Address: 0x2ecba0 - 0x2ecbc4
void finitef_0x2ecba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ecba0u;

    // 0x2ecba0: 0x44036000
    ctx->pc = 0x2ecba0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[12]);
    // 0x2ecba4: 0x60102d
    ctx->pc = 0x2ecba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecba8: 0x3c047fff
    ctx->pc = 0x2ecba8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32767 << 16));
    // 0x2ecbac: 0x3484ffff
    ctx->pc = 0x2ecbacu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ecbb0: 0x3c038080
    ctx->pc = 0x2ecbb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32896 << 16));
    // 0x2ecbb4: 0x441024
    ctx->pc = 0x2ecbb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ecbb8: 0x431021
    ctx->pc = 0x2ecbb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecbbc: 0x3e00008
    ctx->pc = 0x2ECBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECBC0u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECBC4u;
}
