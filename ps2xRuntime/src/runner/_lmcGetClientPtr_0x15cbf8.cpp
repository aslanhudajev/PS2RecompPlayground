#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _lmcGetClientPtr
// Address: 0x15cbf8 - 0x15cc28
void _lmcGetClientPtr_0x15cbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_lmcGetClientPtr");


    ctx->pc = 0x15cbf8u;

    // 0x15cbf8: 0x3c06002e
    ctx->pc = 0x15cbf8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x15cbfc: 0x3c020023
    ctx->pc = 0x15cbfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15cc00: 0x24c6c100
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294951168));
    // 0x15cc04: 0x2442a100
    ctx->pc = 0x15cc04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942976));
    // 0x15cc08: 0xac860000
    ctx->pc = 0x15cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x15cc0c: 0xaca20000
    ctx->pc = 0x15cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15cc10: 0x3c040023
    ctx->pc = 0x15cc10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x15cc14: 0x3c02002e
    ctx->pc = 0x15cc14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x15cc18: 0x8c83a104
    ctx->pc = 0x15cc18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294942980)));
    // 0x15cc1c: 0x2442ab40
    ctx->pc = 0x15cc1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945600));
    // 0x15cc20: 0x3e00008
    ctx->pc = 0x15CC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CC24u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CC28u;
}
