#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_SearchPosToTime
// Address: 0x19cbd8 - 0x19cbe8
void sfsee_SearchPosToTime_0x19cbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_SearchPosToTime");


    ctx->pc = 0x19cbd8u;

    // 0x19cbd8: 0xacc00000
    ctx->pc = 0x19cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x19cbdc: 0x240203e8
    ctx->pc = 0x19cbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19cbe0: 0x3e00008
    ctx->pc = 0x19CBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBE4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CBE8u;
}
