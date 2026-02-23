#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetGunBuffer__Fi
// Address: 0x1ed460 - 0x1ed47c
void GetGunBuffer__Fi_0x1ed460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetGunBuffer__Fi");


    ctx->pc = 0x1ed460u;

    // 0x1ed460: 0x41100
    ctx->pc = 0x1ed460u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ed464: 0x441023
    ctx->pc = 0x1ed464u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ed468: 0x21880
    ctx->pc = 0x1ed468u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed46c: 0x3c020050
    ctx->pc = 0x1ed46cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ed470: 0x24420d30
    ctx->pc = 0x1ed470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3376));
    // 0x1ed474: 0x3e00008
    ctx->pc = 0x1ED474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED478u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED47Cu;
}
