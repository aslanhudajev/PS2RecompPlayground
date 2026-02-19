#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: VSync
// Address: 0x303a50 - 0x303a90
void VSync_0x303a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303a50u;

    // 0x303a50: 0x3c021000
    ctx->pc = 0x303a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x303a54: 0x24030004
    ctx->pc = 0x303a54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x303a58: 0x3442f000
    ctx->pc = 0x303a58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x303a5c: 0xac430000
    ctx->pc = 0x303a5cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_303a60:
    // 0x303a60: 0x3c021001
    ctx->pc = 0x303a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x303a64: 0x8c42f000
    ctx->pc = 0x303a64u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294963200))); // MMIO: 0x1000f000
    // 0x303a68: 0x30420004
    ctx->pc = 0x303a68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x303a6c: 0x0
    ctx->pc = 0x303a6cu;
    // NOP
    // 0x303a70: 0x0
    ctx->pc = 0x303a70u;
    // NOP
    // 0x303a74: 0x0
    ctx->pc = 0x303a74u;
    // NOP
    // 0x303a78: 0x1040fff9
    ctx->pc = 0x303A78u;
    {
        const bool branch_taken_0x303a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x303a78) {
            ctx->pc = 0x303A60u;
            goto label_303a60;
        }
    }
    ctx->pc = 0x303A80u;
    // 0x303a80: 0x24020004
    ctx->pc = 0x303a80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x303a84: 0x3c011001
    ctx->pc = 0x303a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x303a88: 0x3e00008
    ctx->pc = 0x303A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303A8Cu;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303A60u: goto label_303a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x303A90u;
}
