#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BackslashMe
// Address: 0x2d36f8 - 0x2d3738
void BackslashMe_0x2d36f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d36f8u;

    // 0x2d36f8: 0x90820000
    ctx->pc = 0x2d36f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d36fc: 0x1040000c
    ctx->pc = 0x2D36FCu;
    {
        const bool branch_taken_0x2d36fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3700u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d36fc) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D3704u;
    // 0x2d3704: 0x2406002f
    ctx->pc = 0x2d3704u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 47));
    // 0x2d3708: 0x2405005c
    ctx->pc = 0x2d3708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 92));
    // 0x2d370c: 0x0
    ctx->pc = 0x2d370cu;
    // NOP
label_2d3710:
    // 0x2d3710: 0x31600
    ctx->pc = 0x2d3710u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2d3714: 0x21603
    ctx->pc = 0x2d3714u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2d3718: 0x50460001
    ctx->pc = 0x2D3718u;
    {
        const bool branch_taken_0x2d3718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x2d3718) {
            ctx->pc = 0x2D371Cu;
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->pc = 0x2D3720u;
            goto label_2d3720;
        }
    }
    ctx->pc = 0x2D3720u;
label_2d3720:
    // 0x2d3720: 0x24840001
    ctx->pc = 0x2d3720u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d3724: 0x80820000
    ctx->pc = 0x2d3724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3728: 0x1440fff9
    ctx->pc = 0x2D3728u;
    {
        const bool branch_taken_0x2d3728 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D372Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2d3728) {
            ctx->pc = 0x2D3710u;
            goto label_2d3710;
        }
    }
    ctx->pc = 0x2D3730u;
label_2d3730:
    // 0x2d3730: 0x3e00008
    ctx->pc = 0x2D3730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3710u: goto label_2d3710;
            case 0x2D3720u: goto label_2d3720;
            case 0x2D3730u: goto label_2d3730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3738u;
}
