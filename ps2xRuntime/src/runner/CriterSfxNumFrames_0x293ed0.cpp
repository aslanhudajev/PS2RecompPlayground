#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CriterSfxNumFrames
// Address: 0x293ed0 - 0x293ef8
void CriterSfxNumFrames_0x293ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293ed0u;

    // 0x293ed0: 0x4800007
    ctx->pc = 0x293ED0u;
    {
        const bool branch_taken_0x293ed0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x293ED4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x293ed0) {
            ctx->pc = 0x293EF0u;
            goto label_293ef0;
        }
    }
    ctx->pc = 0x293ED8u;
    // 0x293ed8: 0x3c030034
    ctx->pc = 0x293ed8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x293edc: 0x24630eb0
    ctx->pc = 0x293edcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x293ee0: 0x240200f0
    ctx->pc = 0x293ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x293ee4: 0x821018
    ctx->pc = 0x293ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x293ee8: 0x431021
    ctx->pc = 0x293ee8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293eec: 0x8442002c
    ctx->pc = 0x293eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_293ef0:
    // 0x293ef0: 0x3e00008
    ctx->pc = 0x293EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293EF0u: goto label_293ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293EF8u;
}
