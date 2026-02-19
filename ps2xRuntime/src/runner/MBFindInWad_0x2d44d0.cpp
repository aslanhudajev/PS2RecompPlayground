#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBFindInWad
// Address: 0x2d44d0 - 0x2d4524
void MBFindInWad_0x2d44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d44d0u;

    // 0x2d44d0: 0x54800005
    ctx->pc = 0x2D44D0u;
    {
        const bool branch_taken_0x2d44d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d44d0) {
            ctx->pc = 0x2D44D4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->pc = 0x2D44E8u;
            goto label_2d44e8;
        }
    }
    ctx->pc = 0x2D44D8u;
    // 0x2d44d8: 0x3e00008
    ctx->pc = 0x2D44D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D44DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D44E0u: goto label_2d44e0;
            case 0x2D44E8u: goto label_2d44e8;
            case 0x2D4500u: goto label_2d4500;
            case 0x2D451Cu: goto label_2d451c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D44E0u;
label_2d44e0:
    // 0x2d44e0: 0x3e00008
    ctx->pc = 0x2D44E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D44E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D44E0u: goto label_2d44e0;
            case 0x2D44E8u: goto label_2d44e8;
            case 0x2D4500u: goto label_2d4500;
            case 0x2D451Cu: goto label_2d451c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D44E8u;
label_2d44e8:
    // 0x2d44e8: 0x1040000c
    ctx->pc = 0x2D44E8u;
    {
        const bool branch_taken_0x2d44e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D44ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d44e8) {
            ctx->pc = 0x2D451Cu;
            goto label_2d451c;
        }
    }
    ctx->pc = 0x2D44F0u;
    // 0x2d44f0: 0x8c870008
    ctx->pc = 0x2d44f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d44f4: 0x40202d
    ctx->pc = 0x2d44f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44f8: 0x61100
    ctx->pc = 0x2d44f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d44fc: 0x0
    ctx->pc = 0x2d44fcu;
    // NOP
label_2d4500:
    // 0x2d4500: 0x471821
    ctx->pc = 0x2d4500u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d4504: 0x8c620000
    ctx->pc = 0x2d4504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4508: 0x1045fff5
    ctx->pc = 0x2D4508u;
    {
        const bool branch_taken_0x2d4508 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x2D450Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2d4508) {
            ctx->pc = 0x2D44E0u;
            goto label_2d44e0;
        }
    }
    ctx->pc = 0x2D4510u;
    // 0x2d4510: 0xc4102b
    ctx->pc = 0x2d4510u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d4514: 0x1440fffa
    ctx->pc = 0x2D4514u;
    {
        const bool branch_taken_0x2d4514 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D4518u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x2d4514) {
            ctx->pc = 0x2D4500u;
            goto label_2d4500;
        }
    }
    ctx->pc = 0x2D451Cu;
label_2d451c:
    // 0x2d451c: 0x3e00008
    ctx->pc = 0x2D451Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4520u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D44E0u: goto label_2d44e0;
            case 0x2D44E8u: goto label_2d44e8;
            case 0x2D4500u: goto label_2d4500;
            case 0x2D451Cu: goto label_2d451c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4524u;
}
