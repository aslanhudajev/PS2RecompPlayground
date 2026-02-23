#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__7CFcurveFv
// Address: 0x1e6db0 - 0x1e6ddc
void init__7CFcurveFv_0x1e6db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__7CFcurveFv");


    ctx->pc = 0x1e6db0u;

    // 0x1e6db0: 0xac800000
    ctx->pc = 0x1e6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e6db4: 0xa4800010
    ctx->pc = 0x1e6db4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e6db8: 0xa4800016
    ctx->pc = 0x1e6db8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e6dbc: 0xac800004
    ctx->pc = 0x1e6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e6dc0: 0xa4800012
    ctx->pc = 0x1e6dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e6dc4: 0xa4800018
    ctx->pc = 0x1e6dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e6dc8: 0xac800008
    ctx->pc = 0x1e6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e6dcc: 0xa4800014
    ctx->pc = 0x1e6dccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e6dd0: 0xa480001a
    ctx->pc = 0x1e6dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e6dd4: 0x3e00008
    ctx->pc = 0x1E6DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6DD8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6DDCu;
}
