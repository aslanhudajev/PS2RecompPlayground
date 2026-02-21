#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dioState
// Address: 0x202df8 - 0x202e1c
void dioState_0x202df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202df8u;

    // 0x202df8: 0x3c020031
    ctx->pc = 0x202df8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202dfc: 0x8c42ff7c
    ctx->pc = 0x202dfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967164)));
    // 0x202e00: 0x10400004
    ctx->pc = 0x202E00u;
    {
        const bool branch_taken_0x202e00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202E04u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202e00) {
            ctx->pc = 0x202E14u;
            goto label_202e14;
        }
    }
    ctx->pc = 0x202E08u;
    // 0x202e08: 0x3c02003c
    ctx->pc = 0x202e08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x202e0c: 0x8c42b2a0
    ctx->pc = 0x202e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947488)));
    // 0x202e10: 0x2182b
    ctx->pc = 0x202e10u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_202e14:
    // 0x202e14: 0x3e00008
    ctx->pc = 0x202E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202E18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202E14u: goto label_202e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202E1Cu;
}
