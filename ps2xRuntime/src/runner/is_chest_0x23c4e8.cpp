#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: is_chest
// Address: 0x23c4e8 - 0x23c52c
void is_chest_0x23c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c4e8u;

    // 0x23c4e8: 0x54800003
    ctx->pc = 0x23C4E8u;
    {
        const bool branch_taken_0x23c4e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x23c4e8) {
            ctx->pc = 0x23C4ECu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
            ctx->pc = 0x23C4F8u;
            goto label_23c4f8;
        }
    }
    ctx->pc = 0x23C4F0u;
label_23c4f0:
    // 0x23c4f0: 0x3e00008
    ctx->pc = 0x23C4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C4F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C4F0u: goto label_23c4f0;
            case 0x23C4F8u: goto label_23c4f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C4F8u;
label_23c4f8:
    // 0x23c4f8: 0x2402ffff
    ctx->pc = 0x23c4f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c4fc: 0x1062fffc
    ctx->pc = 0x23C4FCu;
    {
        const bool branch_taken_0x23c4fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23c4fc) {
            ctx->pc = 0x23C4F0u;
            goto label_23c4f0;
        }
    }
    ctx->pc = 0x23C504u;
    // 0x23c504: 0x8c820000
    ctx->pc = 0x23c504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23c508: 0x8c430000
    ctx->pc = 0x23c508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c50c: 0x24020002
    ctx->pc = 0x23c50cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c510: 0x1462fff7
    ctx->pc = 0x23C510u;
    {
        const bool branch_taken_0x23c510 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23c510) {
            ctx->pc = 0x23C4F0u;
            goto label_23c4f0;
        }
    }
    ctx->pc = 0x23C518u;
    // 0x23c518: 0x808200e1
    ctx->pc = 0x23c518u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 225)));
    // 0x23c51c: 0x1440fff4
    ctx->pc = 0x23C51Cu;
    {
        const bool branch_taken_0x23c51c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23C520u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x23c51c) {
            ctx->pc = 0x23C4F0u;
            goto label_23c4f0;
        }
    }
    ctx->pc = 0x23C524u;
    // 0x23c524: 0x3e00008
    ctx->pc = 0x23C524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C4F0u: goto label_23c4f0;
            case 0x23C4F8u: goto label_23c4f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C52Cu;
}
