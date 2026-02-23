#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyResetSfdFx
// Address: 0x18dfe8 - 0x18e008
void mwPlyResetSfdFx_0x18dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyResetSfdFx");


    ctx->pc = 0x18dfe8u;

    // 0x18dfe8: 0x3c030024
    ctx->pc = 0x18dfe8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x18dfec: 0x8c623b6c
    ctx->pc = 0x18dfecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15212)));
    // 0x18dff0: 0x10400003
    ctx->pc = 0x18DFF0u;
    {
        const bool branch_taken_0x18dff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18dff0) {
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DFF8u;
    // 0x18dff8: 0x8063766
    ctx->pc = 0x18DFF8u;
    ctx->pc = 0x18DFFCu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15212), GPR_U32(ctx, 0));
    ctx->pc = 0x18DD98u;
    mwPlyInitSfdFx_0x18dd98(rdram, ctx, runtime); return;
    ctx->pc = 0x18E000u;
label_18e000:
    // 0x18e000: 0x3e00008
    ctx->pc = 0x18E000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E000u: goto label_18e000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E008u;
}
