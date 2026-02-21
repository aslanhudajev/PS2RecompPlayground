#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrevCamera
// Address: 0x26b6b8 - 0x26b70c
void PrevCamera_0x26b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b6b8u;

    // 0x26b6b8: 0x3c020034
    ctx->pc = 0x26b6b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b6bc: 0x8c458b70
    ctx->pc = 0x26b6bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x26b6c0: 0x3c020034
    ctx->pc = 0x26b6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b6c4: 0x2442eb60
    ctx->pc = 0x26b6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26b6c8: 0x240301a0
    ctx->pc = 0x26b6c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b6cc: 0x832018
    ctx->pc = 0x26b6ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b6d0: 0x822021
    ctx->pc = 0x26b6d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b6d4: 0x8c830120
    ctx->pc = 0x26b6d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x26b6d8: 0x4620001
    ctx->pc = 0x26B6D8u;
    {
        const bool branch_taken_0x26b6d8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x26b6d8) {
            ctx->pc = 0x26B6DCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->pc = 0x26B6E0u;
            goto label_26b6e0;
        }
    }
    ctx->pc = 0x26B6E0u;
label_26b6e0:
    // 0x26b6e0: 0x18a00008
    ctx->pc = 0x26B6E0u;
    {
        const bool branch_taken_0x26b6e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26B6E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26b6e0) {
            ctx->pc = 0x26B704u;
            goto label_26b704;
        }
    }
    ctx->pc = 0x26B6E8u;
    // 0x26b6e8: 0x8c428b70
    ctx->pc = 0x26b6e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x26b6ec: 0x2463ffff
    ctx->pc = 0x26b6ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_26b6f0:
    // 0x26b6f0: 0x4620001
    ctx->pc = 0x26B6F0u;
    {
        const bool branch_taken_0x26b6f0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x26b6f0) {
            ctx->pc = 0x26B6F4u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->pc = 0x26B6F8u;
            goto label_26b6f8;
        }
    }
    ctx->pc = 0x26B6F8u;
label_26b6f8:
    // 0x26b6f8: 0x24a5ffff
    ctx->pc = 0x26b6f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26b6fc: 0x1ca0fffc
    ctx->pc = 0x26B6FCu;
    {
        const bool branch_taken_0x26b6fc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x26B700u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x26b6fc) {
            ctx->pc = 0x26B6F0u;
            goto label_26b6f0;
        }
    }
    ctx->pc = 0x26B704u;
label_26b704:
    // 0x26b704: 0x3e00008
    ctx->pc = 0x26B704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B6E0u: goto label_26b6e0;
            case 0x26B6F0u: goto label_26b6f0;
            case 0x26B6F8u: goto label_26b6f8;
            case 0x26B704u: goto label_26b704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B70Cu;
}
