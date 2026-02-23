#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetUsbGunBuffer__Fi
// Address: 0x1ed440 - 0x1ed45c
void GetUsbGunBuffer__Fi_0x1ed440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetUsbGunBuffer__Fi");


    ctx->pc = 0x1ed440u;

    // 0x1ed440: 0x41040
    ctx->pc = 0x1ed440u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ed444: 0x441021
    ctx->pc = 0x1ed444u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ed448: 0x21940
    ctx->pc = 0x1ed448u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ed44c: 0x3c020051
    ctx->pc = 0x1ed44cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed450: 0x24424a40
    ctx->pc = 0x1ed450u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19008));
    // 0x1ed454: 0x3e00008
    ctx->pc = 0x1ED454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED458u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED45Cu;
}
