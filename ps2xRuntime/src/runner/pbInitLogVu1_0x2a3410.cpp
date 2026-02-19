#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitLogVu1
// Address: 0x2a3410 - 0x2a34b0
void pbInitLogVu1_0x2a3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3410u;

    // 0x2a3410: 0x3c020036
    ctx->pc = 0x2a3410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3414: 0x8c44dee0
    ctx->pc = 0x2a3414u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a3418: 0x8c83002c
    ctx->pc = 0x2a3418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a341c: 0x24020001
    ctx->pc = 0x2a341cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3420: 0xac620018
    ctx->pc = 0x2a3420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2a3424: 0x8c83002c
    ctx->pc = 0x2a3424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3428: 0x3c020036
    ctx->pc = 0x2a3428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a342c: 0x24422f70
    ctx->pc = 0x2a342cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12144));
    // 0x2a3430: 0xac62001c
    ctx->pc = 0x2a3430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2a3434: 0x8c85002c
    ctx->pc = 0x2a3434u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3438: 0x24434e18
    ctx->pc = 0x2a3438u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 19992));
    // 0x2a343c: 0xaca30020
    ctx->pc = 0x2a343cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x2a3440: 0x8c83002c
    ctx->pc = 0x2a3440u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3444: 0x24424e1c
    ctx->pc = 0x2a3444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19996));
    // 0x2a3448: 0xac620024
    ctx->pc = 0x2a3448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x2a344c: 0x8c82002c
    ctx->pc = 0x2a344cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3450: 0x8c43001c
    ctx->pc = 0x2a3450u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2a3454: 0x3c02badb
    ctx->pc = 0x2a3454u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a3458: 0x3442eef4
    ctx->pc = 0x2a3458u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61172));
    // 0x2a345c: 0xac620000
    ctx->pc = 0x2a345cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a3460: 0x8c82002c
    ctx->pc = 0x2a3460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3464: 0x8c430020
    ctx->pc = 0x2a3464u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a3468: 0x3c02badb
    ctx->pc = 0x2a3468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a346c: 0x3442eef0
    ctx->pc = 0x2a346cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61168));
    // 0x2a3470: 0xac620000
    ctx->pc = 0x2a3470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a3474: 0x8c82002c
    ctx->pc = 0x2a3474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3478: 0x8c430024
    ctx->pc = 0x2a3478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2a347c: 0x3c02badb
    ctx->pc = 0x2a347cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a3480: 0x3442eef2
    ctx->pc = 0x2a3480u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61170));
    // 0x2a3484: 0xac620000
    ctx->pc = 0x2a3484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a3488: 0x8c83002c
    ctx->pc = 0x2a3488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a348c: 0x2402fffe
    ctx->pc = 0x2a348cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2a3490: 0xac62002c
    ctx->pc = 0x2a3490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2a3494: 0x8c83002c
    ctx->pc = 0x2a3494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3498: 0x3c02ffff
    ctx->pc = 0x2a3498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2a349c: 0x3442ffff
    ctx->pc = 0x2a349cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a34a0: 0xac620030
    ctx->pc = 0x2a34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2a34a4: 0x8c82002c
    ctx->pc = 0x2a34a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a34a8: 0x3e00008
    ctx->pc = 0x2A34A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A34ACu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A34B0u;
}
