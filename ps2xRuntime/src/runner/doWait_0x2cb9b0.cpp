#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: doWait
// Address: 0x2cb9b0 - 0x2cb9d8
void doWait_0x2cb9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cb9b0u;

label_2cb9b0:
    // 0x2cb9b0: 0x8c820000
    ctx->pc = 0x2cb9b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb9b4: 0x0
    ctx->pc = 0x2cb9b4u;
    // NOP
    // 0x2cb9b8: 0x0
    ctx->pc = 0x2cb9b8u;
    // NOP
    // 0x2cb9bc: 0x0
    ctx->pc = 0x2cb9bcu;
    // NOP
    // 0x2cb9c0: 0x0
    ctx->pc = 0x2cb9c0u;
    // NOP
    // 0x2cb9c4: 0x1040fffa
    ctx->pc = 0x2CB9C4u;
    {
        const bool branch_taken_0x2cb9c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb9c4) {
            ctx->pc = 0x2CB9B0u;
            goto label_2cb9b0;
        }
    }
    ctx->pc = 0x2CB9CCu;
    // 0x2cb9cc: 0x8c820000
    ctx->pc = 0x2cb9ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb9d0: 0x3e00008
    ctx->pc = 0x2CB9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB9B0u: goto label_2cb9b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CB9D8u;
}
