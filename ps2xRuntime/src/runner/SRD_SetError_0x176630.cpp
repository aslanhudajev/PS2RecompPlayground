#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_SetError
// Address: 0x176630 - 0x176640
void SRD_SetError_0x176630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_SetError");


    ctx->pc = 0x176630u;

    // 0x176630: 0x3c030024
    ctx->pc = 0x176630u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x176634: 0x24020009
    ctx->pc = 0x176634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x176638: 0x3e00008
    ctx->pc = 0x176638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17663Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936436), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176640u;
}
