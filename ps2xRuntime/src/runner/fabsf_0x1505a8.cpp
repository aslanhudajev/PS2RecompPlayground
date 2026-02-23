#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fabsf
// Address: 0x1505a8 - 0x1505c4
void fabsf_0x1505a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fabsf");


    ctx->pc = 0x1505a8u;

    // 0x1505a8: 0x44036000
    ctx->pc = 0x1505a8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[12]);
    // 0x1505ac: 0x3c027fff
    ctx->pc = 0x1505acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1505b0: 0x3442ffff
    ctx->pc = 0x1505b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1505b4: 0x621824
    ctx->pc = 0x1505b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1505b8: 0x44830000
    ctx->pc = 0x1505b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1505bc: 0x3e00008
    ctx->pc = 0x1505BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1505C4u;
}
