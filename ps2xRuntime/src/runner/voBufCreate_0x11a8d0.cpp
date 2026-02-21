#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufCreate
// Address: 0x11a8d0 - 0x11a918
void voBufCreate_0x11a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a8d0u;

    // 0x11a8d0: 0xac80000c
    ctx->pc = 0x11a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x11a8d4: 0xac850000
    ctx->pc = 0x11a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11a8d8: 0x282d
    ctx->pc = 0x11a8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8dc: 0xac800008
    ctx->pc = 0x11a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x11a8e0: 0xac860004
    ctx->pc = 0x11a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x11a8e4: 0x18e0000a
    ctx->pc = 0x11A8E4u;
    {
        const bool branch_taken_0x11a8e4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x11A8E8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        if (branch_taken_0x11a8e4) {
            ctx->pc = 0x11A910u;
            goto label_11a910;
        }
    }
    ctx->pc = 0x11A8ECu;
    // 0x11a8ec: 0x0
    ctx->pc = 0x11a8ecu;
    // NOP
label_11a8f0:
    // 0x11a8f0: 0x3c02000a
    ctx->pc = 0x11a8f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)10 << 16));
    // 0x11a8f4: 0x3442af40
    ctx->pc = 0x11a8f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 44864));
    // 0x11a8f8: 0xa21818
    ctx->pc = 0x11a8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x11a8fc: 0x24a50001
    ctx->pc = 0x11a8fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x11a900: 0x661021
    ctx->pc = 0x11a900u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11a904: 0xa7182a
    ctx->pc = 0x11a904u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x11a908: 0x1460fff9
    ctx->pc = 0x11A908u;
    {
        const bool branch_taken_0x11a908 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A90Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x11a908) {
            ctx->pc = 0x11A8F0u;
            goto label_11a8f0;
        }
    }
    ctx->pc = 0x11A910u;
label_11a910:
    // 0x11a910: 0x3e00008
    ctx->pc = 0x11A910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A914u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A8F0u: goto label_11a8f0;
            case 0x11A910u: goto label_11a910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A918u;
}
