#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetError
// Address: 0x2a5560 - 0x2a5584
void pbResetError_0x2a5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5560u;

    // 0x2a5560: 0x3c020036
    ctx->pc = 0x2a5560u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a5564: 0x8c43dee0
    ctx->pc = 0x2a5564u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a5568: 0x8c62000c
    ctx->pc = 0x2a5568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a556c: 0x14400003
    ctx->pc = 0x2A556Cu;
    {
        const bool branch_taken_0x2a556c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A5570u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2a556c) {
            ctx->pc = 0x2A557Cu;
            goto label_2a557c;
        }
    }
    ctx->pc = 0x2A5574u;
    // 0x2a5574: 0x24428010
    ctx->pc = 0x2a5574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934544));
    // 0x2a5578: 0xac62000c
    ctx->pc = 0x2a5578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2a557c:
    // 0x2a557c: 0x3e00008
    ctx->pc = 0x2A557Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A557Cu: goto label_2a557c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5584u;
}
