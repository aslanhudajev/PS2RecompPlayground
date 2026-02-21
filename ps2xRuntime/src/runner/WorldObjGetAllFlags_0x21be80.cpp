#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldObjGetAllFlags
// Address: 0x21be80 - 0x21beac
void WorldObjGetAllFlags_0x21be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21be80u;

    // 0x21be80: 0x10800008
    ctx->pc = 0x21BE80u;
    {
        const bool branch_taken_0x21be80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BE84u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21be80) {
            ctx->pc = 0x21BEA4u;
            goto label_21bea4;
        }
    }
    ctx->pc = 0x21BE88u;
label_21be88:
    // 0x21be88: 0x8c820010
    ctx->pc = 0x21be88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21be8c: 0x621825
    ctx->pc = 0x21be8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21be90: 0x8c840018
    ctx->pc = 0x21be90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x21be94: 0x0
    ctx->pc = 0x21be94u;
    // NOP
    // 0x21be98: 0x0
    ctx->pc = 0x21be98u;
    // NOP
    // 0x21be9c: 0x1480fffa
    ctx->pc = 0x21BE9Cu;
    {
        const bool branch_taken_0x21be9c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x21be9c) {
            ctx->pc = 0x21BE88u;
            goto label_21be88;
        }
    }
    ctx->pc = 0x21BEA4u;
label_21bea4:
    // 0x21bea4: 0x3e00008
    ctx->pc = 0x21BEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BEA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21BE88u: goto label_21be88;
            case 0x21BEA4u: goto label_21bea4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21BEACu;
}
