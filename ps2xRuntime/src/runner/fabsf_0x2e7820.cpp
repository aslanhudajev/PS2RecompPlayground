#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fabsf
// Address: 0x2e7820 - 0x2e783c
void fabsf_0x2e7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e7820u;

    // 0x2e7820: 0x44036000
    ctx->pc = 0x2e7820u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[12]);
    // 0x2e7824: 0x3c027fff
    ctx->pc = 0x2e7824u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x2e7828: 0x3442ffff
    ctx->pc = 0x2e7828u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e782c: 0x621824
    ctx->pc = 0x2e782cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e7830: 0x44830000
    ctx->pc = 0x2e7830u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2e7834: 0x3e00008
    ctx->pc = 0x2E7834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E783Cu;
}
