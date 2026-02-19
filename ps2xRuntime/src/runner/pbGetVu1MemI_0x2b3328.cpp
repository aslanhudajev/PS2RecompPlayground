#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1MemI
// Address: 0x2b3328 - 0x2b3344
void pbGetVu1MemI_0x2b3328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3328u;

    // 0x2b3328: 0x52880
    ctx->pc = 0x2b3328u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b332c: 0xa42821
    ctx->pc = 0x2b332cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b3330: 0x3c021100
    ctx->pc = 0x2b3330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
    // 0x2b3334: 0x3442c000
    ctx->pc = 0x2b3334u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2b3338: 0xa22821
    ctx->pc = 0x2b3338u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b333c: 0x3e00008
    ctx->pc = 0x2B333Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3340u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3344u;
}
