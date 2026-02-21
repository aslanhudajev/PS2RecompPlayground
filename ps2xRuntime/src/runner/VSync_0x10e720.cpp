#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: VSync
// Address: 0x10e720 - 0x10e760
void VSync_0x10e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e720u;

    // 0x10e720: 0x3c021000
    ctx->pc = 0x10e720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x10e724: 0x24030004
    ctx->pc = 0x10e724u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e728: 0x3442f000
    ctx->pc = 0x10e728u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x10e72c: 0xac430000
    ctx->pc = 0x10e72cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_10e730:
    // 0x10e730: 0x3c021001
    ctx->pc = 0x10e730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x10e734: 0x8c42f000
    ctx->pc = 0x10e734u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294963200))); // MMIO: 0x1000f000
    // 0x10e738: 0x30420004
    ctx->pc = 0x10e738u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x10e73c: 0x0
    ctx->pc = 0x10e73cu;
    // NOP
    // 0x10e740: 0x0
    ctx->pc = 0x10e740u;
    // NOP
    // 0x10e744: 0x0
    ctx->pc = 0x10e744u;
    // NOP
    // 0x10e748: 0x1040fff9
    ctx->pc = 0x10E748u;
    {
        const bool branch_taken_0x10e748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10e748) {
            ctx->pc = 0x10E730u;
            goto label_10e730;
        }
    }
    ctx->pc = 0x10E750u;
    // 0x10e750: 0x24020004
    ctx->pc = 0x10e750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e754: 0x3c011001
    ctx->pc = 0x10e754u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x10e758: 0x3e00008
    ctx->pc = 0x10E758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E75Cu;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E730u: goto label_10e730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E760u;
}
