#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setLifeStart__10PlayerTaskFv
// Address: 0x20f710 - 0x20f728
void setLifeStart__10PlayerTaskFv_0x20f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setLifeStart__10PlayerTaskFv");


    ctx->pc = 0x20f710u;

    // 0x20f710: 0x8c831cbc
    ctx->pc = 0x20f710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f714: 0x8c650044
    ctx->pc = 0x20f714u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x20f718: 0xac650010
    ctx->pc = 0x20f718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x20f71c: 0x8c831cbc
    ctx->pc = 0x20f71cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f720: 0x3e00008
    ctx->pc = 0x20F720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F724u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F728u;
}
