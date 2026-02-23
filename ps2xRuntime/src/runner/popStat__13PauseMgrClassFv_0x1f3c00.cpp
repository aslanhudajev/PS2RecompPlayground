#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: popStat__13PauseMgrClassFv
// Address: 0x1f3c00 - 0x1f3c34
void popStat__13PauseMgrClassFv_0x1f3c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("popStat__13PauseMgrClassFv");


    ctx->pc = 0x1f3c00u;

    // 0x1f3c00: 0x84830008
    ctx->pc = 0x1f3c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f3c04: 0x2463ffff
    ctx->pc = 0x1f3c04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f3c08: 0xa4830008
    ctx->pc = 0x1f3c08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3c0c: 0x31c3c
    ctx->pc = 0x1f3c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f3c10: 0x31c3f
    ctx->pc = 0x1f3c10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f3c14: 0x641821
    ctx->pc = 0x1f3c14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3c18: 0x80660014
    ctx->pc = 0x1f3c18u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1f3c1c: 0x8485000a
    ctx->pc = 0x1f3c1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1f3c20: 0x24a30001
    ctx->pc = 0x1f3c20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f3c24: 0xa483000a
    ctx->pc = 0x1f3c24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3c28: 0xa41821
    ctx->pc = 0x1f3c28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f3c2c: 0x3e00008
    ctx->pc = 0x1F3C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3C30u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3C34u;
}
