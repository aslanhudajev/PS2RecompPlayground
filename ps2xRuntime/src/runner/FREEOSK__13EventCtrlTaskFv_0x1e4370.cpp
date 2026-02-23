#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREEOSK__13EventCtrlTaskFv
// Address: 0x1e4370 - 0x1e43b0
void FREEOSK__13EventCtrlTaskFv_0x1e4370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREEOSK__13EventCtrlTaskFv");


    ctx->pc = 0x1e4370u;

    // 0x1e4370: 0x27bdffe0
    ctx->pc = 0x1e4370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4374: 0x7fbf0010
    ctx->pc = 0x1e4374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4378: 0x7fb00000
    ctx->pc = 0x1e4378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e437c: 0x8c83000c
    ctx->pc = 0x1e437cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4380: 0x70808628
    ctx->pc = 0x1e4380u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4384: 0x3c020051
    ctx->pc = 0x1e4384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4388: 0x8c650004
    ctx->pc = 0x1e4388u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e438c: 0xc086600
    ctx->pc = 0x1E438Cu;
    SET_GPR_U32(ctx, 31, 0x1E4394u);
    ctx->pc = 0x1E4390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219800u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeOneSkin__13EntryDatClassFi_0x219800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4394u; }
        else if (ctx->pc != 0x1E4394u) { ctx->pc = 0x1E4394u; }
    }
    if (ctx->pc != 0x1E4394u) { return; }
    ctx->pc = 0x1E4394u;
    // 0x1e4394: 0x8e03000c
    ctx->pc = 0x1e4394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4398: 0x24630008
    ctx->pc = 0x1e4398u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e439c: 0xae03000c
    ctx->pc = 0x1e439cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e43a0: 0x7bbf0010
    ctx->pc = 0x1e43a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e43a4: 0x7bb00000
    ctx->pc = 0x1e43a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e43a8: 0x3e00008
    ctx->pc = 0x1E43A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E43ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E43B0u;
}
