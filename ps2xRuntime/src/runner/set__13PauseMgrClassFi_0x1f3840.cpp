#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: set__13PauseMgrClassFi
// Address: 0x1f3840 - 0x1f3858
void set__13PauseMgrClassFi_0x1f3840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("set__13PauseMgrClassFi");


    ctx->pc = 0x1f3840u;

    // 0x1f3840: 0x8486000a
    ctx->pc = 0x1f3840u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1f3844: 0x24c30001
    ctx->pc = 0x1f3844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f3848: 0xa483000a
    ctx->pc = 0x1f3848u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f384c: 0xc41821
    ctx->pc = 0x1f384cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1f3850: 0x3e00008
    ctx->pc = 0x1F3850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3854u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3858u;
}
