#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VSync
// Address: 0x154d60 - 0x154da0
void VSync_0x154d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VSync");


    ctx->pc = 0x154d60u;

    // 0x154d60: 0x3c021000
    ctx->pc = 0x154d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x154d64: 0x24030004
    ctx->pc = 0x154d64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x154d68: 0x3442f000
    ctx->pc = 0x154d68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x154d6c: 0xac430000
    ctx->pc = 0x154d6cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_154d70:
    // 0x154d70: 0x3c021001
    ctx->pc = 0x154d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x154d74: 0x8c42f000
    ctx->pc = 0x154d74u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294963200))); // MMIO: 0x1000f000
    // 0x154d78: 0x30420004
    ctx->pc = 0x154d78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x154d7c: 0x0
    ctx->pc = 0x154d7cu;
    // NOP
    // 0x154d80: 0x0
    ctx->pc = 0x154d80u;
    // NOP
    // 0x154d84: 0x0
    ctx->pc = 0x154d84u;
    // NOP
    // 0x154d88: 0x1040fff9
    ctx->pc = 0x154D88u;
    {
        const bool branch_taken_0x154d88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x154d88) {
            ctx->pc = 0x154D70u;
            goto label_154d70;
        }
    }
    ctx->pc = 0x154D90u;
    // 0x154d90: 0x24020004
    ctx->pc = 0x154d90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x154d94: 0x3c011001
    ctx->pc = 0x154d94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x154d98: 0x3e00008
    ctx->pc = 0x154D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154D9Cu;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154D70u: goto label_154d70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154DA0u;
}
