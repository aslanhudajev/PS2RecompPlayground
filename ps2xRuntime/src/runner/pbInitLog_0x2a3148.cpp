#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitLog
// Address: 0x2a3148 - 0x2a31c8
void pbInitLog_0x2a3148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3148u;

    // 0x2a3148: 0x3c020036
    ctx->pc = 0x2a3148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a314c: 0x8c44dee0
    ctx->pc = 0x2a314cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a3150: 0x8c83002c
    ctx->pc = 0x2a3150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3154: 0x3c02ffff
    ctx->pc = 0x2a3154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2a3158: 0x3442ffff
    ctx->pc = 0x2a3158u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a315c: 0xac620004
    ctx->pc = 0x2a315cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a3160: 0x8c83002c
    ctx->pc = 0x2a3160u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3164: 0x3c020036
    ctx->pc = 0x2a3164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3168: 0x2442e150
    ctx->pc = 0x2a3168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959440));
    // 0x2a316c: 0xac620008
    ctx->pc = 0x2a316cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2a3170: 0x8c85002c
    ctx->pc = 0x2a3170u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3174: 0x24434e18
    ctx->pc = 0x2a3174u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 19992));
    // 0x2a3178: 0xaca3000c
    ctx->pc = 0x2a3178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2a317c: 0x8c83002c
    ctx->pc = 0x2a317cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3180: 0x24424e1c
    ctx->pc = 0x2a3180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19996));
    // 0x2a3184: 0xac620010
    ctx->pc = 0x2a3184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2a3188: 0x8c82002c
    ctx->pc = 0x2a3188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a318c: 0x8c430008
    ctx->pc = 0x2a318cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a3190: 0x3c02badb
    ctx->pc = 0x2a3190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a3194: 0x3442eef4
    ctx->pc = 0x2a3194u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61172));
    // 0x2a3198: 0xac620000
    ctx->pc = 0x2a3198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a319c: 0x8c82002c
    ctx->pc = 0x2a319cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a31a0: 0x8c43000c
    ctx->pc = 0x2a31a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a31a4: 0x3c02badb
    ctx->pc = 0x2a31a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a31a8: 0x3442eef0
    ctx->pc = 0x2a31a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61168));
    // 0x2a31ac: 0xac620000
    ctx->pc = 0x2a31acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a31b0: 0x8c82002c
    ctx->pc = 0x2a31b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a31b4: 0x8c430010
    ctx->pc = 0x2a31b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a31b8: 0x3c02badb
    ctx->pc = 0x2a31b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a31bc: 0x3442eef2
    ctx->pc = 0x2a31bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61170));
    // 0x2a31c0: 0x3e00008
    ctx->pc = 0x2A31C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A31C4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A31C8u;
}
