#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: QueueInit
// Address: 0x304388 - 0x3043ac
void QueueInit_0x304388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304388u;

    // 0x304388: 0x3c02003e
    ctx->pc = 0x304388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x30438c: 0x24433e40
    ctx->pc = 0x30438cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 15936));
    // 0x304390: 0xac443e40
    ctx->pc = 0x304390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15936), GPR_U32(ctx, 4));
    // 0x304394: 0x24640010
    ctx->pc = 0x304394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 16));
    // 0x304398: 0x60102d
    ctx->pc = 0x304398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30439c: 0xac640008
    ctx->pc = 0x30439cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x3043a0: 0xac600004
    ctx->pc = 0x3043a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3043a4: 0x3e00008
    ctx->pc = 0x3043A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3043A8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3043ACu;
}
