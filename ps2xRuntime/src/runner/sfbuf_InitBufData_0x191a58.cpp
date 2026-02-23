#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_InitBufData
// Address: 0x191a58 - 0x191a78
void sfbuf_InitBufData_0x191a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_InitBufData");


    ctx->pc = 0x191a58u;

    // 0x191a58: 0x24020009
    ctx->pc = 0x191a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x191a5c: 0xac850000
    ctx->pc = 0x191a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x191a60: 0xac820364
    ctx->pc = 0x191a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 2));
    // 0x191a64: 0xac860004
    ctx->pc = 0x191a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x191a68: 0xac800008
    ctx->pc = 0x191a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x191a6c: 0xac80000c
    ctx->pc = 0x191a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x191a70: 0x3e00008
    ctx->pc = 0x191A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191A74u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191A78u;
}
