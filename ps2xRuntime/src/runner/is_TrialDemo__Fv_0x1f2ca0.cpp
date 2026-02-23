#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_TrialDemo__Fv
// Address: 0x1f2ca0 - 0x1f2cb8
void is_TrialDemo__Fv_0x1f2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_TrialDemo__Fv");


    ctx->pc = 0x1f2ca0u;

    // 0x1f2ca0: 0x97838e10
    ctx->pc = 0x1f2ca0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938128)));
    // 0x1f2ca4: 0x24020001
    ctx->pc = 0x1f2ca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2ca8: 0x54620001
    ctx->pc = 0x1F2CA8u;
    {
        const bool branch_taken_0x1f2ca8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f2ca8) {
            ctx->pc = 0x1F2CACu;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1F2CB0u;
            goto label_1f2cb0;
        }
    }
    ctx->pc = 0x1F2CB0u;
label_1f2cb0:
    // 0x1f2cb0: 0x3e00008
    ctx->pc = 0x1F2CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2CB0u: goto label_1f2cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2CB8u;
}
