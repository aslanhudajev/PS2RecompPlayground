#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: incReqWrPtr__13EntryDatClassFv
// Address: 0x2193c0 - 0x2193d4
void incReqWrPtr__13EntryDatClassFv_0x2193c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("incReqWrPtr__13EntryDatClassFv");


    ctx->pc = 0x2193c0u;

    // 0x2193c0: 0x84831002
    ctx->pc = 0x2193c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x2193c4: 0x24630001
    ctx->pc = 0x2193c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2193c8: 0x306300ff
    ctx->pc = 0x2193c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x2193cc: 0x3e00008
    ctx->pc = 0x2193CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2193D0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 4098), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2193D4u;
}
