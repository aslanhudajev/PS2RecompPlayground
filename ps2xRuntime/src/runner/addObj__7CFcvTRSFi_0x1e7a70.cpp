#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: addObj__7CFcvTRSFi
// Address: 0x1e7a70 - 0x1e7a8c
void addObj__7CFcvTRSFi_0x1e7a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("addObj__7CFcvTRSFi");


    ctx->pc = 0x1e7a70u;

    // 0x1e7a70: 0x8c8600b0
    ctx->pc = 0x1e7a70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1e7a74: 0x24c30001
    ctx->pc = 0x1e7a74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7a78: 0xac8300b0
    ctx->pc = 0x1e7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
    // 0x1e7a7c: 0x61880
    ctx->pc = 0x1e7a7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e7a80: 0x641821
    ctx->pc = 0x1e7a80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7a84: 0x3e00008
    ctx->pc = 0x1E7A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7A88u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7A8Cu;
}
