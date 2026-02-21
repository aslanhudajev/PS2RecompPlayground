#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetGeom
// Address: 0x2ad368 - 0x2ad38c
void pbResetGeom_0x2ad368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad368u;

    // 0x2ad368: 0x3c020036
    ctx->pc = 0x2ad368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad36c: 0x8c43dee0
    ctx->pc = 0x2ad36cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad370: 0x8c620044
    ctx->pc = 0x2ad370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2ad374: 0x14400003
    ctx->pc = 0x2AD374u;
    {
        const bool branch_taken_0x2ad374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AD378u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ad374) {
            ctx->pc = 0x2AD384u;
            goto label_2ad384;
        }
    }
    ctx->pc = 0x2AD37Cu;
    // 0x2ad37c: 0x244285d8
    ctx->pc = 0x2ad37cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936024));
    // 0x2ad380: 0xac620044
    ctx->pc = 0x2ad380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_2ad384:
    // 0x2ad384: 0x3e00008
    ctx->pc = 0x2AD384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD384u: goto label_2ad384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD38Cu;
}
