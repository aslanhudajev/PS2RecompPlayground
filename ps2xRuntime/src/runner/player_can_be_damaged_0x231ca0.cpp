#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_can_be_damaged
// Address: 0x231ca0 - 0x231cf0
void player_can_be_damaged_0x231ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231ca0u;

    // 0x231ca0: 0x8c8201e0
    ctx->pc = 0x231ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x231ca4: 0x2442ffa8
    ctx->pc = 0x231ca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967208));
    // 0x231ca8: 0x2c420003
    ctx->pc = 0x231ca8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x231cac: 0x1440000c
    ctx->pc = 0x231CACu;
    {
        const bool branch_taken_0x231cac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x231cac) {
            ctx->pc = 0x231CE0u;
            goto label_231ce0;
        }
    }
    ctx->pc = 0x231CB4u;
    // 0x231cb4: 0x8c8208c8
    ctx->pc = 0x231cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2248)));
    // 0x231cb8: 0x2842000b
    ctx->pc = 0x231cb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x231cbc: 0x10400008
    ctx->pc = 0x231CBCu;
    {
        const bool branch_taken_0x231cbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x231cbc) {
            ctx->pc = 0x231CE0u;
            goto label_231ce0;
        }
    }
    ctx->pc = 0x231CC4u;
    // 0x231cc4: 0x9482093c
    ctx->pc = 0x231cc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2364)));
    // 0x231cc8: 0x30420010
    ctx->pc = 0x231cc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x231ccc: 0x14400004
    ctx->pc = 0x231CCCu;
    {
        const bool branch_taken_0x231ccc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x231ccc) {
            ctx->pc = 0x231CE0u;
            goto label_231ce0;
        }
    }
    ctx->pc = 0x231CD4u;
    // 0x231cd4: 0x8c820690
    ctx->pc = 0x231cd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1680)));
    // 0x231cd8: 0x10400003
    ctx->pc = 0x231CD8u;
    {
        const bool branch_taken_0x231cd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x231cd8) {
            ctx->pc = 0x231CE8u;
            goto label_231ce8;
        }
    }
    ctx->pc = 0x231CE0u;
label_231ce0:
    // 0x231ce0: 0x3e00008
    ctx->pc = 0x231CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231CE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231CE0u: goto label_231ce0;
            case 0x231CE8u: goto label_231ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231CE8u;
label_231ce8:
    // 0x231ce8: 0x3e00008
    ctx->pc = 0x231CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231CECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231CE0u: goto label_231ce0;
            case 0x231CE8u: goto label_231ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231CF0u;
}
