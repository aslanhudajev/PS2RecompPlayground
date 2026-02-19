#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: falloc
// Address: 0x2dbc48 - 0x2dbc68
void falloc_0x2dbc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dbc48u;

    // 0x2dbc48: 0x8c830000
    ctx->pc = 0x2dbc48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbc4c: 0x651823
    ctx->pc = 0x2dbc4cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2dbc50: 0xac830000
    ctx->pc = 0x2dbc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2dbc54: 0x318c0
    ctx->pc = 0x2dbc54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2dbc58: 0x3c02003d
    ctx->pc = 0x2dbc58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2dbc5c: 0x24426f60
    ctx->pc = 0x2dbc5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28512));
    // 0x2dbc60: 0x3e00008
    ctx->pc = 0x2DBC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC64u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBC68u;
}
