#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BGMPAUSE__13EventCtrlTaskFv
// Address: 0x1e3410 - 0x1e3450
void BGMPAUSE__13EventCtrlTaskFv_0x1e3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BGMPAUSE__13EventCtrlTaskFv");


    ctx->pc = 0x1e3410u;

    // 0x1e3410: 0x27bdffe0
    ctx->pc = 0x1e3410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3414: 0x7fbf0010
    ctx->pc = 0x1e3414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3418: 0x7fb00000
    ctx->pc = 0x1e3418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e341c: 0x8c83000c
    ctx->pc = 0x1e341cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3420: 0x70808628
    ctx->pc = 0x1e3420u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3424: 0x3c020051
    ctx->pc = 0x1e3424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3428: 0x8c650004
    ctx->pc = 0x1e3428u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e342c: 0xc086068
    ctx->pc = 0x1E342Cu;
    SET_GPR_U32(ctx, 31, 0x1E3434u);
    ctx->pc = 0x1E3430u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2181A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        bgmPause__13SoundMgrClassFi_0x2181a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3434u; }
        else if (ctx->pc != 0x1E3434u) { ctx->pc = 0x1E3434u; }
    }
    if (ctx->pc != 0x1E3434u) { return; }
    ctx->pc = 0x1E3434u;
    // 0x1e3434: 0x8e03000c
    ctx->pc = 0x1e3434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3438: 0x24630008
    ctx->pc = 0x1e3438u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e343c: 0xae03000c
    ctx->pc = 0x1e343cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3440: 0x7bbf0010
    ctx->pc = 0x1e3440u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3444: 0x7bb00000
    ctx->pc = 0x1e3444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3448: 0x3e00008
    ctx->pc = 0x1E3448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E344Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3450u;
}
