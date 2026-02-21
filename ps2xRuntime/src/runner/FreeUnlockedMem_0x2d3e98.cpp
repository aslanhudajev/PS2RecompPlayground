#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FreeUnlockedMem
// Address: 0x2d3e98 - 0x2d3ef8
void FreeUnlockedMem_0x2d3e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3e98u;

    // 0x2d3e98: 0x3c05003a
    ctx->pc = 0x2d3e98u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2d3e9c: 0x3c03003a
    ctx->pc = 0x2d3e9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d3ea0: 0x24632360
    ctx->pc = 0x2d3ea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9056));
    // 0x2d3ea4: 0x41080
    ctx->pc = 0x2d3ea4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d3ea8: 0x431021
    ctx->pc = 0x2d3ea8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3eac: 0x8c420000
    ctx->pc = 0x2d3eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3eb0: 0xaca2230c
    ctx->pc = 0x2d3eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8972), GPR_U32(ctx, 2));
    // 0x2d3eb4: 0x24840001
    ctx->pc = 0x2d3eb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d3eb8: 0x28820008
    ctx->pc = 0x2d3eb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x2d3ebc: 0x10400009
    ctx->pc = 0x2D3EBCu;
    {
        const bool branch_taken_0x2d3ebc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3EC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d3ebc) {
            ctx->pc = 0x2D3EE4u;
            goto label_2d3ee4;
        }
    }
    ctx->pc = 0x2D3EC4u;
    // 0x2d3ec4: 0x24432360
    ctx->pc = 0x2d3ec4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9056));
label_2d3ec8:
    // 0x2d3ec8: 0x41080
    ctx->pc = 0x2d3ec8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d3ecc: 0x431021
    ctx->pc = 0x2d3eccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3ed0: 0xac400000
    ctx->pc = 0x2d3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d3ed4: 0x24840001
    ctx->pc = 0x2d3ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d3ed8: 0x28820008
    ctx->pc = 0x2d3ed8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x2d3edc: 0x1440fffa
    ctx->pc = 0x2D3EDCu;
    {
        const bool branch_taken_0x2d3edc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d3edc) {
            ctx->pc = 0x2D3EC8u;
            goto label_2d3ec8;
        }
    }
    ctx->pc = 0x2D3EE4u;
label_2d3ee4:
    // 0x2d3ee4: 0x3c02003d
    ctx->pc = 0x2d3ee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d3ee8: 0x3c03003d
    ctx->pc = 0x2d3ee8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2d3eec: 0x8c632cf4
    ctx->pc = 0x2d3eecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 11508)));
    // 0x2d3ef0: 0x3e00008
    ctx->pc = 0x2D3EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3EF4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 11504), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3EC8u: goto label_2d3ec8;
            case 0x2D3EE4u: goto label_2d3ee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3EF8u;
}
