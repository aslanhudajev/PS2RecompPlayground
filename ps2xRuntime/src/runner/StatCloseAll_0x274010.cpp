#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StatCloseAll
// Address: 0x274010 - 0x274030
void StatCloseAll_0x274010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274010u;

    // 0x274010: 0x3c02003c
    ctx->pc = 0x274010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x274014: 0x904239f0
    ctx->pc = 0x274014u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14832)));
    // 0x274018: 0x10400003
    ctx->pc = 0x274018u;
    {
        const bool branch_taken_0x274018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x274018) {
            ctx->pc = 0x274028u;
            goto label_274028;
        }
    }
    ctx->pc = 0x274020u;
    // 0x274020: 0x809d010
    ctx->pc = 0x274020u;
    ctx->pc = 0x274040u;
    StatQuitSession_0x274040(rdram, ctx, runtime); return;
    ctx->pc = 0x274028u;
label_274028:
    // 0x274028: 0x3e00008
    ctx->pc = 0x274028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274028u: goto label_274028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274030u;
}
