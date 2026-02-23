#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXCRS_Unlock
// Address: 0x1693c0 - 0x1693e0
void ADXCRS_Unlock_0x1693c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXCRS_Unlock");
    ctx->pc = 0x1693c0u;

    // 0x1693c0: 0x8f8280f8
    ctx->pc = 0x1693c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x1693c4: 0x2442ffff
    ctx->pc = 0x1693c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1693c8: 0x14400003
    ctx->pc = 0x1693C8u;
    {
        const bool branch_taken_0x1693c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1693CCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934776), GPR_U32(ctx, 2));
        if (branch_taken_0x1693c8) {
            ctx->pc = 0x1693D8u;
            goto label_1693d8;
        }
    }
    ctx->pc = 0x1693D0u;
    // 0x1693d0: 0x805f700
    ctx->pc = 0x1693D0u;
    ctx->pc = 0x17DC00u;
    SVM_Unlock_0x17dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x1693D8u;
label_1693d8:
    // 0x1693d8: 0x3e00008
    ctx->pc = 0x1693D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1693D8u: goto label_1693d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1693E0u;
}
