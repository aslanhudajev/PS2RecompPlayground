#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: appointBG__11BGCtrlClassFPUi
// Address: 0x1c8c60 - 0x1c8c78
void appointBG__11BGCtrlClassFPUi_0x1c8c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("appointBG__11BGCtrlClassFPUi");


    ctx->pc = 0x1c8c60u;

    // 0x1c8c60: 0x84830008
    ctx->pc = 0x1c8c60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c8c64: 0x24a20008
    ctx->pc = 0x1c8c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1c8c68: 0xa483000a
    ctx->pc = 0x1c8c68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c8c6c: 0x94a30004
    ctx->pc = 0x1c8c6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c8c70: 0x3e00008
    ctx->pc = 0x1C8C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C74u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8C78u;
}
