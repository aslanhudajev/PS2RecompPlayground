#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_ConnBufTrn
// Address: 0x19f270 - 0x19f294
void sftrn_ConnBufTrn_0x19f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_ConnBufTrn");


    ctx->pc = 0x19f270u;

    // 0x19f270: 0x240206e0
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1760));
    // 0x19f274: 0x24030388
    ctx->pc = 0x19f274u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 904));
    // 0x19f278: 0xc23818
    ctx->pc = 0x19f278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x19f27c: 0xe41021
    ctx->pc = 0x19f27cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x19f280: 0xa33818
    ctx->pc = 0x19f280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x19f284: 0xac453024
    ctx->pc = 0x19f284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12324), GPR_U32(ctx, 5));
    // 0x19f288: 0xe41821
    ctx->pc = 0x19f288u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x19f28c: 0x3e00008
    ctx->pc = 0x19F28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F290u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4248), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F294u;
}
