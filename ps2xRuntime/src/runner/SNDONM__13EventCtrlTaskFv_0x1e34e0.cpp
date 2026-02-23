#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SNDONM__13EventCtrlTaskFv
// Address: 0x1e34e0 - 0x1e352c
void SNDONM__13EventCtrlTaskFv_0x1e34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SNDONM__13EventCtrlTaskFv");


    ctx->pc = 0x1e34e0u;

    // 0x1e34e0: 0x27bdffe0
    ctx->pc = 0x1e34e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e34e4: 0x7fbf0010
    ctx->pc = 0x1e34e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e34e8: 0x7fb00000
    ctx->pc = 0x1e34e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e34ec: 0x8c82000c
    ctx->pc = 0x1e34ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e34f0: 0x70808628
    ctx->pc = 0x1e34f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e34f4: 0x8c450008
    ctx->pc = 0x1e34f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e34f8: 0x8c46000c
    ctx->pc = 0x1e34f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e34fc: 0x8c470010
    ctx->pc = 0x1e34fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e3500: 0x8c480014
    ctx->pc = 0x1e3500u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e3504: 0x8c490018
    ctx->pc = 0x1e3504u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1e3508: 0xc250390
    ctx->pc = 0x1E3508u;
    SET_GPR_U32(ctx, 31, 0x1E3510u);
    ctx->pc = 0x1E350Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x940E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ManySe__Fiiiiii_0x940e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3510u; }
        else if (ctx->pc != 0x1E3510u) { ctx->pc = 0x1E3510u; }
    }
    if (ctx->pc != 0x1E3510u) { return; }
    ctx->pc = 0x1E3510u;
    // 0x1e3510: 0x8e03000c
    ctx->pc = 0x1e3510u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3514: 0x2463001c
    ctx->pc = 0x1e3514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28));
    // 0x1e3518: 0xae03000c
    ctx->pc = 0x1e3518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e351c: 0x7bbf0010
    ctx->pc = 0x1e351cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3520: 0x7bb00000
    ctx->pc = 0x1e3520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3524: 0x3e00008
    ctx->pc = 0x1E3524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3528u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E352Cu;
}
