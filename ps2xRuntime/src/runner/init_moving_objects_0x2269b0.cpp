#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_moving_objects
// Address: 0x2269b0 - 0x2269e4
void init_moving_objects_0x2269b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2269b0u;

    // 0x2269b0: 0x202d
    ctx->pc = 0x2269b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2269b4: 0x3c020033
    ctx->pc = 0x2269b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2269b8: 0x2443dfd0
    ctx->pc = 0x2269b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2269bc: 0x0
    ctx->pc = 0x2269bcu;
    // NOP
label_2269c0:
    // 0x2269c0: 0xac6000c8
    ctx->pc = 0x2269c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
    // 0x2269c4: 0xac600070
    ctx->pc = 0x2269c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x2269c8: 0x24840001
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2269cc: 0x246303b0
    ctx->pc = 0x2269ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 944));
    // 0x2269d0: 0x28820019
    ctx->pc = 0x2269d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 25));
    // 0x2269d4: 0x1440fffa
    ctx->pc = 0x2269D4u;
    {
        const bool branch_taken_0x2269d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2269d4) {
            ctx->pc = 0x2269C0u;
            goto label_2269c0;
        }
    }
    ctx->pc = 0x2269DCu;
    // 0x2269dc: 0x3e00008
    ctx->pc = 0x2269DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2269C0u: goto label_2269c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2269E4u;
}
