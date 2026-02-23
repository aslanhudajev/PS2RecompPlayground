#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__13ColliMgrClassFv
// Address: 0x1d3240 - 0x1d3290
void init__13ColliMgrClassFv_0x1d3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__13ColliMgrClassFv");


    ctx->pc = 0x1d3240u;

    // 0x1d3240: 0x3c0301ec
    ctx->pc = 0x1d3240u;
    SET_GPR_U32(ctx, 3, ((uint32_t)492 << 16));
    // 0x1d3244: 0x3464d000
    ctx->pc = 0x1d3244u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 53248));
    // 0x1d3248: 0x3c010050
    ctx->pc = 0x1d3248u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d324c: 0xac24fc60
    ctx->pc = 0x1d324cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966368), GPR_U32(ctx, 4));
    // 0x1d3250: 0x3c010050
    ctx->pc = 0x1d3250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3254: 0xac20fc64
    ctx->pc = 0x1d3254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966372), GPR_U32(ctx, 0));
    // 0x1d3258: 0x3c010050
    ctx->pc = 0x1d3258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d325c: 0xac20fc68
    ctx->pc = 0x1d325cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966376), GPR_U32(ctx, 0));
    // 0x1d3260: 0x3c010050
    ctx->pc = 0x1d3260u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3264: 0xac20fc6c
    ctx->pc = 0x1d3264u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966380), GPR_U32(ctx, 0));
    // 0x1d3268: 0x3463d800
    ctx->pc = 0x1d3268u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55296));
    // 0x1d326c: 0x3c010050
    ctx->pc = 0x1d326cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3270: 0xac23fc70
    ctx->pc = 0x1d3270u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966384), GPR_U32(ctx, 3));
    // 0x1d3274: 0x3c010050
    ctx->pc = 0x1d3274u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3278: 0xac20fc74
    ctx->pc = 0x1d3278u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966388), GPR_U32(ctx, 0));
    // 0x1d327c: 0x3c010050
    ctx->pc = 0x1d327cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3280: 0xac20fc78
    ctx->pc = 0x1d3280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966392), GPR_U32(ctx, 0));
    // 0x1d3284: 0x3c010050
    ctx->pc = 0x1d3284u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3288: 0x3e00008
    ctx->pc = 0x1D3288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D328Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966396), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3290u;
}
