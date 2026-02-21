#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PsfxNumFrames
// Address: 0x24df68 - 0x24df90
void PsfxNumFrames_0x24df68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24df68u;

    // 0x24df68: 0x4800007
    ctx->pc = 0x24DF68u;
    {
        const bool branch_taken_0x24df68 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x24DF6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x24df68) {
            ctx->pc = 0x24DF88u;
            goto label_24df88;
        }
    }
    ctx->pc = 0x24DF70u;
    // 0x24df70: 0x3c030034
    ctx->pc = 0x24df70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x24df74: 0x24630eb0
    ctx->pc = 0x24df74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x24df78: 0x240200f0
    ctx->pc = 0x24df78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x24df7c: 0x821018
    ctx->pc = 0x24df7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24df80: 0x431021
    ctx->pc = 0x24df80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24df84: 0x8442002c
    ctx->pc = 0x24df84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_24df88:
    // 0x24df88: 0x3e00008
    ctx->pc = 0x24DF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DF88u: goto label_24df88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24DF90u;
}
