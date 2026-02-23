#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_IsEndcode
// Address: 0x18fa70 - 0x18faa4
void SFADXT_IsEndcode_0x18fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_IsEndcode");


    ctx->pc = 0x18fa70u;

    // 0x18fa70: 0x24020012
    ctx->pc = 0x18fa70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x18fa74: 0x28a50012
    ctx->pc = 0x18fa74u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 18));
    // 0x18fa78: 0x14a00005
    ctx->pc = 0x18FA78u;
    {
        const bool branch_taken_0x18fa78 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18FA7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x18fa78) {
            ctx->pc = 0x18FA90u;
            goto label_18fa90;
        }
    }
    ctx->pc = 0x18FA80u;
    // 0x18fa80: 0x90830000
    ctx->pc = 0x18fa80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18fa84: 0x24020080
    ctx->pc = 0x18fa84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x18fa88: 0x50620003
    ctx->pc = 0x18FA88u;
    {
        const bool branch_taken_0x18fa88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x18fa88) {
            ctx->pc = 0x18FA8Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->pc = 0x18FA98u;
            goto label_18fa98;
        }
    }
    ctx->pc = 0x18FA90u;
label_18fa90:
    // 0x18fa90: 0x3e00008
    ctx->pc = 0x18FA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FA94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FA90u: goto label_18fa90;
            case 0x18FA98u: goto label_18fa98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FA98u;
label_18fa98:
    // 0x18fa98: 0x38420001
    ctx->pc = 0x18fa98u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x18fa9c: 0x3e00008
    ctx->pc = 0x18FA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FAA0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FA90u: goto label_18fa90;
            case 0x18FA98u: goto label_18fa98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FAA4u;
}
