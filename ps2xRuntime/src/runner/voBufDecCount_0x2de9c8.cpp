#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufDecCount
// Address: 0x2de9c8 - 0x2de9e8
void voBufDecCount_0x2de9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de9c8u;

    // 0x2de9c8: 0x8c82000c
    ctx->pc = 0x2de9c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2de9cc: 0x18400004
    ctx->pc = 0x2DE9CCu;
    {
        const bool branch_taken_0x2de9cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2de9cc) {
            ctx->pc = 0x2DE9E0u;
            goto label_2de9e0;
        }
    }
    ctx->pc = 0x2DE9D4u;
    // 0x2de9d4: 0x8c82000c
    ctx->pc = 0x2de9d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2de9d8: 0x2442ffff
    ctx->pc = 0x2de9d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2de9dc: 0xac82000c
    ctx->pc = 0x2de9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2de9e0:
    // 0x2de9e0: 0x3e00008
    ctx->pc = 0x2DE9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE9E0u: goto label_2de9e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE9E8u;
}
