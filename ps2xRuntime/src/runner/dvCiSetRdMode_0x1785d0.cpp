#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiSetRdMode
// Address: 0x1785d0 - 0x1785f0
void dvCiSetRdMode_0x1785d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiSetRdMode");


    ctx->pc = 0x1785d0u;

    // 0x1785d0: 0x3c020024
    ctx->pc = 0x1785d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1785d4: 0x3c080024
    ctx->pc = 0x1785d4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)36 << 16));
    // 0x1785d8: 0x24439f18
    ctx->pc = 0x1785d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294942488));
    // 0x1785dc: 0xa0449f18
    ctx->pc = 0x1785dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294942488), (uint8_t)GPR_U32(ctx, 4));
    // 0x1785e0: 0xa0660002
    ctx->pc = 0x1785e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1785e4: 0xad079f1c
    ctx->pc = 0x1785e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294942492), GPR_U32(ctx, 7));
    // 0x1785e8: 0x3e00008
    ctx->pc = 0x1785E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785ECu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1785F0u;
}
