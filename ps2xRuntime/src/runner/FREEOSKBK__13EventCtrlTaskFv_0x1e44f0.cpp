#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREEOSKBK__13EventCtrlTaskFv
// Address: 0x1e44f0 - 0x1e4530
void FREEOSKBK__13EventCtrlTaskFv_0x1e44f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREEOSKBK__13EventCtrlTaskFv");


    ctx->pc = 0x1e44f0u;

    // 0x1e44f0: 0x27bdffe0
    ctx->pc = 0x1e44f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e44f4: 0x7fbf0010
    ctx->pc = 0x1e44f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e44f8: 0x7fb00000
    ctx->pc = 0x1e44f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e44fc: 0x8c83000c
    ctx->pc = 0x1e44fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4500: 0x70808628
    ctx->pc = 0x1e4500u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4504: 0x3c020051
    ctx->pc = 0x1e4504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4508: 0x8c650004
    ctx->pc = 0x1e4508u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e450c: 0xc086640
    ctx->pc = 0x1E450Cu;
    SET_GPR_U32(ctx, 31, 0x1E4514u);
    ctx->pc = 0x1E4510u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219900u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeOskBank__13EntryDatClassFi_0x219900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4514u; }
        else if (ctx->pc != 0x1E4514u) { ctx->pc = 0x1E4514u; }
    }
    if (ctx->pc != 0x1E4514u) { return; }
    ctx->pc = 0x1E4514u;
    // 0x1e4514: 0x8e03000c
    ctx->pc = 0x1e4514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4518: 0x24630008
    ctx->pc = 0x1e4518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e451c: 0xae03000c
    ctx->pc = 0x1e451cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4520: 0x7bbf0010
    ctx->pc = 0x1e4520u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4524: 0x7bb00000
    ctx->pc = 0x1e4524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4528: 0x3e00008
    ctx->pc = 0x1E4528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E452Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4530u;
}
