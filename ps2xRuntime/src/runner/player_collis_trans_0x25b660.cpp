#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_collis_trans
// Address: 0x25b660 - 0x25b6b4
void player_collis_trans_0x25b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25b660u;

    // 0x25b660: 0x8c840884
    ctx->pc = 0x25b660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2180)));
    // 0x25b664: 0x10800011
    ctx->pc = 0x25B664u;
    {
        const bool branch_taken_0x25b664 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B668u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b664) {
            ctx->pc = 0x25B6ACu;
            goto label_25b6ac;
        }
    }
    ctx->pc = 0x25B66Cu;
    // 0x25b66c: 0x8c820000
    ctx->pc = 0x25b66cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25b670: 0x8c430000
    ctx->pc = 0x25b670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b674: 0x2402000b
    ctx->pc = 0x25b674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x25b678: 0x1462000c
    ctx->pc = 0x25B678u;
    {
        const bool branch_taken_0x25b678 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25B67Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25b678) {
            ctx->pc = 0x25B6ACu;
            goto label_25b6ac;
        }
    }
    ctx->pc = 0x25B680u;
    // 0x25b680: 0x8c8500f8
    ctx->pc = 0x25b680u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x25b684: 0x84a300d8
    ctx->pc = 0x25b684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x25b688: 0x10620007
    ctx->pc = 0x25B688u;
    {
        const bool branch_taken_0x25b688 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25B68Cu;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 216)));
        if (branch_taken_0x25b688) {
            ctx->pc = 0x25B6A8u;
            goto label_25b6a8;
        }
    }
    ctx->pc = 0x25B690u;
    // 0x25b690: 0x80a200e1
    ctx->pc = 0x25b690u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 225)));
    // 0x25b694: 0x54400005
    ctx->pc = 0x25B694u;
    {
        const bool branch_taken_0x25b694 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25b694) {
            ctx->pc = 0x25B698u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x25B6ACu;
            goto label_25b6ac;
        }
    }
    ctx->pc = 0x25B69Cu;
    // 0x25b69c: 0x30824000
    ctx->pc = 0x25b69cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 16384));
    // 0x25b6a0: 0x14400002
    ctx->pc = 0x25B6A0u;
    {
        const bool branch_taken_0x25b6a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25b6a0) {
            ctx->pc = 0x25B6ACu;
            goto label_25b6ac;
        }
    }
    ctx->pc = 0x25B6A8u;
label_25b6a8:
    // 0x25b6a8: 0x282d
    ctx->pc = 0x25b6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b6ac:
    // 0x25b6ac: 0x3e00008
    ctx->pc = 0x25B6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B6B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B6A8u: goto label_25b6a8;
            case 0x25B6ACu: goto label_25b6ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B6B4u;
}
