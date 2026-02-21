#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fabsf
// Address: 0x11e1e8 - 0x11e204
void fabsf_0x11e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e1e8u;

    // 0x11e1e8: 0x44036000
    ctx->pc = 0x11e1e8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[12]);
    // 0x11e1ec: 0x3c027fff
    ctx->pc = 0x11e1ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x11e1f0: 0x3442ffff
    ctx->pc = 0x11e1f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11e1f4: 0x621824
    ctx->pc = 0x11e1f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e1f8: 0x44830000
    ctx->pc = 0x11e1f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x11e1fc: 0x3e00008
    ctx->pc = 0x11E1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E204u;
}
