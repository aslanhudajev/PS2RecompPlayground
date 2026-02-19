#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextCamera
// Address: 0x26b680 - 0x26b6b4
void NextCamera_0x26b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b680u;

    // 0x26b680: 0x3c020034
    ctx->pc = 0x26b680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b684: 0x8c428b70
    ctx->pc = 0x26b684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x26b688: 0x18400008
    ctx->pc = 0x26B688u;
    {
        const bool branch_taken_0x26b688 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26b688) {
            ctx->pc = 0x26B6ACu;
            goto label_26b6ac;
        }
    }
    ctx->pc = 0x26B690u;
label_26b690:
    // 0x26b690: 0x2442ffff
    ctx->pc = 0x26b690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26b694: 0x0
    ctx->pc = 0x26b694u;
    // NOP
    // 0x26b698: 0x0
    ctx->pc = 0x26b698u;
    // NOP
    // 0x26b69c: 0x0
    ctx->pc = 0x26b69cu;
    // NOP
    // 0x26b6a0: 0x0
    ctx->pc = 0x26b6a0u;
    // NOP
    // 0x26b6a4: 0x1c40fffa
    ctx->pc = 0x26B6A4u;
    {
        const bool branch_taken_0x26b6a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x26b6a4) {
            ctx->pc = 0x26B690u;
            goto label_26b690;
        }
    }
    ctx->pc = 0x26B6ACu;
label_26b6ac:
    // 0x26b6ac: 0x3e00008
    ctx->pc = 0x26B6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B690u: goto label_26b690;
            case 0x26B6ACu: goto label_26b6ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B6B4u;
}
